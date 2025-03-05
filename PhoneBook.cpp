#include "PhoneBook.h"
#include <iostream>

PhoneBook::PhoneBook() :currentSize(0), maxSize(SIZE_OF_DATA) {
    contacts = new Contact*[maxSize];
}

PhoneBook::~PhoneBook() {
    for (int i = 0; i < currentSize; i++) {
        delete contacts[i];
    }
    delete[] contacts;
}

void PhoneBook::showContacts() const {
    for (int i = 0; i < currentSize; i++) {
        std::cout << i + 1 << ") ";
        contacts[i]->display();
    }
}

int PhoneBook::addContact(const Contact* contact) {
    try {
        if (currentSize == maxSize) {
            resizeContacts();
        }
        contacts[currentSize] = new Contact(*contact);
        currentSize++;
        return 0;
    } catch (const std::bad_alloc& e) {
        std::cout << "Błąd alokacji pomięci" << e.what() << std::endl;
        return -1;
    }
}

void PhoneBook::removeContact(const int index) {
    if (index < 0 || index >= currentSize) return;

    delete contacts[index];

    for (int i = index; i < currentSize - 1; i++) {
        contacts[i] = contacts[i + 1];
    }

    currentSize--;
}

void PhoneBook::resizeContacts() {
    const int newMaxSize = maxSize + 10;
    auto** newContacts = new Contact*[newMaxSize];

    for (int i = 0; i < currentSize; i++) {
        newContacts[i] = contacts[i];
    }

    delete[] contacts;
    contacts = newContacts;
    maxSize = newMaxSize;
}



