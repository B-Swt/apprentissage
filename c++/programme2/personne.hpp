#include <string>

class Person
{
private:
    std::string name_;
    unsigned short age_;

public:
    Person(std::string name, unsigned short age) : name_(name), age_(age) {}
};