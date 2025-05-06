#include <string>
#include <iostream>

class Person {
    private:
        std::string name_;
        unsigned short age_;

    public:
        Person(const std::string& name, unsigned short age) : name_(name), age_(age) {}

    public:
        void introduce() const {
            std::cout << "Bonjour, vous êtes " << name_ << " et vous avez " << age_ << " ans." << std::endl;
        }
};