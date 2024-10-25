#include "register.h"
#include "ui_register.h"
#include<QLineEdit>
#include<QMessageBox>
#include <QButtonGroup>





Register::Register(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground,true);
    QList<QLineEdit *> mandatoryFields = {
      ui->lineEdit_lastname,    // Access by their object name from Qt Designer
       ui->lineEdit_firstname,
      ui->lineEdit_conpassword,
      ui->lineEdit_crpassword,
      ui->lineEdit_email,
        ui->lineEdit_crusername
    };
 // Connect the submit button to the validation logic
        connect(ui->pushButton_signup, &QPushButton::clicked, this, [mandatoryFields, this]() {
            bool allFilled = true;

            // Iterate through mandatory fields and validate them
             for (QLineEdit *field : mandatoryFields) {
                 if (field->text().trimmed().isEmpty()) {  // Check if field is empty
                    // field->setStyleSheet("QLineEdit { border: 2px solid red; }");
                     field->clearFocus();
                     allFilled = false;
               } else {field->setStyleSheet("QLineEdit  {border-bottom:2px solid rgba(105,118,132,255);}");

                       field->setStyleSheet("QLineEdit {border:none;}");

                      // field->setStyleSheet("QLineEdit  {color:rgba(255,255,255,230);}");
                       field->setStyleSheet("QLineEdit  {padding-bottom:7px;}");
                       field->setStyleSheet("QLineEdit  {font-size:13px;}");
                       field->setStyleSheet("QLineEdit  {color:black;}");
                       field->update();
                                  // Reset border to default
                  }
             }

            if (!allFilled) {
                QMessageBox::warning(this, "Validation Error",
               "Please fill all mandatory fields!");
                return;
            }
             });

            QButtonGroup *genderGroup = new QButtonGroup(this);
            genderGroup->addButton(ui->radioButton_male);    // Add 'Male' button
            genderGroup->addButton(ui->radioButton_female);  // Add 'Female' button
            genderGroup->addButton(ui->radioButton_other);   // Add 'Other' button

            // Connect the submit button to the validation logic
            connect(ui->pushButton_signup, &QPushButton::clicked, this, [this, genderGroup]() {
                if (genderGroup->checkedButton() == nullptr) {  // No button selected
                    QMessageBox::warning(this, "Validation Error",
                                         "Please select a gender.");
                    return;
                }
    });

}


Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_close_clicked()
{
    close();
}


void Register::on_pushButton_signup_clicked()
{
    QString FirstName = ui->lineEdit_firstname->text();
    QString MiddleName = ui->lineEdit_middlename->text();
    QString LastName = ui->lineEdit_lastname->text();
    QString Email = ui->lineEdit_email->text();
    QString UserName = ui->lineEdit_crusername->text();
    QString PassWord = ui->lineEdit_crpassword->text();
    QString ConfirmPassWord = ui->lineEdit_conpassword->text();

    if(PassWord != ConfirmPassWord)
    {
         QMessageBox::information(this,"Movie Recommendation System","Incorrect password");
    }
    //aba database connect garerww information input garni ani username match vayo vane try again ko baki


}

