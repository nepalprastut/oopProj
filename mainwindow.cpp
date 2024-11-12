#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QJsonArray>
#include <QInputDialog>
#include <QMessageBox>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QDebug>
#include <QLabel>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    netManager = new QNetworkAccessManager(this);
    netReply = nullptr;
    img = new QPixmap();
    setFixedSize(1920, 1080);
    loginWindow = nullptr;
    registerWindow = nullptr;
}

MainWindow::~MainWindow()
{
    delete ui;
    if (loginWindow) {
        delete loginWindow;
    }
    if (registerWindow) {
        delete registerWindow;
    }
    delete db;
}


const QString API_KEY = "bf3ce5fa7c0e31adaa82cb21e0c6886e";          // TMDB API key
static int currentLabelIndex = 0;

void MainWindow::sendRequest(int movieId) // Modified to accept movieId
{
    // Use the correct API key and the provided movie ID
    QNetworkRequest req{QUrl(QString("https://api.themoviedb.org/3/movie/%1?api_key=%2").arg(movieId).arg(API_KEY))};
    netReply = netManager->get(req);
    connect(netReply, &QNetworkReply::readyRead, this, &MainWindow::readData);
    connect(netReply, &QNetworkReply::finished, this, &MainWindow::finishReading);
}

void MainWindow::readData()
{
    dataBuffer.append(netReply->readAll());
}

void MainWindow::finishReading()
{
    if (netReply->error() != QNetworkReply::NoError) {
        qDebug() << "Error: " << netReply->errorString();
        QMessageBox::warning(this, "Error", QString("Request [Error]: %1").arg(netReply->errorString()));
    } else {
        // Convert the data from a JSON doc to a JSON object
        QJsonObject movieJsonInfo = QJsonDocument::fromJson(dataBuffer).object();

        // Extract the poster path
        QString picLink = movieJsonInfo.value("poster_path").toString();

        if (picLink.isEmpty()) {
            qDebug() << "Poster path not found!";
            dataBuffer.clear(); // Clear the buffer
            currentLabelIndex++; // Increment index even if poster is not found
            // Trigger the next request if available
            triggerNextRequest();
            return; // Exit if there's no poster
        }

        // Construct the full URL for the poster image
        QNetworkRequest link{QUrl(QString("https://image.tmdb.org/t/p/w500%1").arg(picLink))};
        netReply = netManager->get(link);
        connect(netReply, &QNetworkReply::finished, this, &MainWindow::setUserImage);
        dataBuffer.clear();
    }
}

void MainWindow::setUserImage() {
    if (netReply->error() != QNetworkReply::NoError) {
        qDebug() << "Error fetching image: " << netReply->errorString();
        return; // Exit if there was an error
    }

    img->loadFromData(netReply->readAll());

    // Determine which label to set the pixmap to
    QString labelName = QString("picLabel_%1").arg(currentLabelIndex + 1); // Create label name dynamically
    QLabel* label = findChild<QLabel*>(labelName); // Find the label by name

    if (label) {
        // Scale and set the pixmap to the label
        QPixmap temp = img->scaled(label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation);
        label->setPixmap(temp);
    } else {
        qDebug() << "Label not found: " << labelName;
    }

    currentLabelIndex++; // Increment the index for next image
    // Trigger next request if available
    triggerNextRequest();
}

// Method to trigger the next movie request
void MainWindow::triggerNextRequest() {
    QList<int> movieIds = {238, 769, 680, 157336, 807, 27205, 16869, 694, 14, 62}; // List of movie IDs
    if (currentLabelIndex < movieIds.size()) {
        sendRequest(movieIds[currentLabelIndex]); // Send request for the next movie ID
    }
}

void MainWindow::on_check_clicked() {
    // Reset the label index before starting
    currentLabelIndex = 0;
    triggerNextRequest(); // Start the first request
}
//uncomment above code for api poster fetch functionality




void MainWindow::on_lg_clicked()
{
    if (!loginWindow) {
        loginWindow = new Login(db, this);  // Create as a QMainWindow
    }
    loginWindow->show();
}


void MainWindow::on_rg_clicked()
{
    if (!registerWindow) {
        registerWindow = new Register(db, this);
    }
    registerWindow->show();
}

