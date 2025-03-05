#include "PhoneBook.h"
#include <iostream>

int main() {

    PhoneBook phoneBook;

    Contact contact1("Adam", "Adamczyk", 16351361);
    Contact contact2("Piotr", "Skrzydło", 36515631);
    Contact contact3("Kostia", "Mambo", 23131321);

    phoneBook.addContact(&contact1);
    phoneBook.addContact(&contact2);
    phoneBook.addContact(&contact3);

    phoneBook.showContacts();

    phoneBook.removeContact(2);

    std::cout << "\nNew contacts list:" << std::endl;
    phoneBook.showContacts();

    return 0;
}