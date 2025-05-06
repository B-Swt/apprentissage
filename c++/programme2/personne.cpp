#include "personne.hpp"
#include <iomanip>

Person::Person() : name_(""), age_(0) {}
Person::Person(const std::string &name, unsigned short age) : name_(name), age_(age) {};

void Person::addUser(Person &p) {
    try {
        users.push_back(p);
        std::cout << "User added ✅" << std::endl;
    }
    catch (const std::exception &e) {
        std::cout << "An error occured : " << e.what() << "❌" << std::endl;
    }
}

void Person::showUsers() const {
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "┌───────────────────── USERS ────────────────────┐" << std::endl;
    std::cout << "│     Name            │     Age                  │" << std::endl;
    std::cout << "├─────────────────────┼──────────────────────────┤" << std::endl;
    for (const auto& user : users) {
        std::cout << "│ " << std::left << std::setw(20) << user.name_
                  << "│ " << std::left << std::setw(25) << user.age_ << "│" << std::endl;
    }
    std::cout << "└────────────────────────────────────────────────┘" << std::endl;
    
    std::cout << "End ✅" << std::endl;
}