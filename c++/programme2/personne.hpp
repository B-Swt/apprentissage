#include <string>
#include <vector>
#include <exception>
#include <iostream>

class Person {
    private:
        std::string name_;
        unsigned short age_;
        std::vector<Person> users;

    public:
        Person();
        Person(const std::string& name, unsigned short age);

    public:
        void addUser(Person& p );
        void showUsers() const;
};