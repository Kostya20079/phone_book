#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.h"

#define SIZE_OF_DATA 20


class PhoneBook {
    int currentSize;
    int maxSize;
    Contact **contacts{};

    void resizeContacts();
public:
    PhoneBook();
    ~PhoneBook();

    void showContacts() const;
    int addContact(const Contact* contact);
    void removeContact(int index);
};



#endif //PHONEBOOK_H
