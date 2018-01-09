#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
        cityField(new QLineEdit())
{
    addRow("<font style = 'color:Green'>First Name", firstNameField);
    addRow("<font style = 'color:Green'>Last Name", lastNameField);
    addRow("<font style = 'color:Green'>Address", addressField);
    addRow("<font style = 'color:Green'>Phone Number", phoneNumberField);
    addRow("<font style = 'color:Green'>Email", emailField);
    addRow("<font style = 'color:Green'>City", cityField);
}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
    cityField->setText("");
}
