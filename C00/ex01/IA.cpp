#include <iostream>
#include <iomanip>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    Contact(const std::string& first, const std::string& last, const std::string& nick,
            const std::string& phone, const std::string& secret)
        : firstName(first), lastName(last), nickname(nick), phoneNumber(phone), darkestSecret(secret) {}

    std::string GetFirstName() const {
        return firstName;
    }

    std::string GetLastName() const {
        return lastName;
    }

    std::string GetNickname() const {
        return nickname;
    }

    std::string GetPhoneNumber() const {
        return phoneNumber;
    }

    std::string GetDarkestSecret() const {
        return darkestSecret;
    }
};

class PhoneBook {
private:
    static const int MAX_CONTACTS = 8;
    Contact* contacts[MAX_CONTACTS];
    int contactCount;

public:
    PhoneBook() : contactCount(0) {}

    void AddContact(const std::string& first, const std::string& last, const std::string& nick,
                    const std::string& phone, const std::string& secret) {
        if (contactCount == MAX_CONTACTS) {
            delete contacts[0];
            for (int i = 0; i < MAX_CONTACTS - 1; i++) {
                contacts[i] = contacts[i + 1];
            }
            contactCount--;
        }

        contacts[contactCount] = new Contact(first, last, nick, phone, secret);
        contactCount++;
    }

    const Contact* GetContact(int index) const {
        if (index >= 0 && index < contactCount) {
            return contacts[index];
        }
        return nullptr;
    }

    int GetContactCount() const {
        return contactCount;
    }
};

void SearchContact(const PhoneBook& phoneBook) {
    std::cout << std::setw(10) << "Index" << std::setw(10) << "First Name"
              << std::setw(10) << "Last Name" << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < phoneBook.GetContactCount(); i++) {
        const Contact* contact = phoneBook.GetContact(i);
        if (contact != nullptr) {
            std::cout << std::setw(10) << i << std::setw(10) << contact->GetFirstName().substr(0, 9)
                      << std::setw(10) << contact->GetLastName().substr(0, 9)
                      << std::setw(10) << contact->GetNickname().substr(0, 9) << std::endl;
        }
    }

    int index;
    std::cout << "Enter the index of the contact to display: ";
    std::cin >> index;

    if (index >= 0 && index < phoneBook.GetContactCount()) {
        const Contact* contact = phoneBook.GetContact(index);
        if (contact != nullptr) {
            std::cout << "First Name: " << contact->GetFirstName() << std::endl;
            std::cout << "Last Name: " << contact->GetLastName() << std::endl;
            std::cout << "Nickname: " << contact->GetNickname() << std::endl;
            std::cout << "Phone Number: " << contact->GetPhoneNumber() << std::endl;
            std::cout << "Darkest Secret: " << contact->GetDarkestSecret() << std::endl;
        }
    } else {
        std::cout << "Invalid index." << std::endl;
    }
}

int main() {
    PhoneBook phoneBook;
    std::string command;

    std::cout << "Welcome to the 80s PhoneBook!" << std::endl;

    while (true) {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::cin >> command;

        if (command == "ADD") {
            std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
            std::cout << "First Name: ";
            std::cin >> firstName;
            std::cout << "Last Name: ";
            std::cin >> lastName;
            std::cout << "Nickname: ";
            std::cin >> nickname;
            std::cout << "Phone Number: ";
            std::cin >> phoneNumber;
            std::cout << "Darkest Secret: ";
            std::cin >> darkestSecret;

            phoneBook.AddContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
        } else if (command == "SEARCH") {
            SearchContact(phoneBook);
        } else if (command == "EXIT") {
            break;
        } else {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }

    return 0;
}
