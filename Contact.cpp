#include "Contact.h"
#include <iostream>
#include <cstring>

Contact::Contact(const char* name, const char* surname, const long phoneNumber) {
    strcpy(this->name, name);
    strcpy(this->surname, surname);
    this->phoneNumber = phoneNumber;
}

void Contact::display() const {
    std::cout << "Imię: " << name << ", Nazwisko: " << surname << ", Tel: " << phoneNumber << std::endl;
}
