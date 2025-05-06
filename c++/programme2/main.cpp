#include "personne.hpp"
#include <string>

void progam() {
    std::string action = "A";
    std::string name;
    unsigned short age;
    Person manage;

    while (action == "A") {
        std::cout << "User's name: ";
        std::cin >> name;

        std::cout << name << "'s age: ";
        std::cin >> age;

        Person p(name, age);
        manage.addUser(p);

        std::cout << "Add other user (A) ";
        std::cout << "Show registered users (S) ";
        std::cin >> action;
    }

    if (action == "S") manage.showUsers();
    else std::cout << "Bad instruction, exit.." << std::endl;
}

int main() {
    progam();
}