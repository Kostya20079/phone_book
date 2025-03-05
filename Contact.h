#ifndef CONTACT_H
#define CONTACT_H

#define SIZE_OF_TEXT 20


class Contact {
    char name[SIZE_OF_TEXT] = {};
    char surname[SIZE_OF_TEXT] = {};
    long phoneNumber;

public:
    Contact(const char* name, const char* surname, long phoneNumber);
    void display() const;
};



#endif //CONTACT_H
