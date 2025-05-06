#include <iostream>

const char* sentence(unsigned short age) {
    if (age <= 10 )
        return "jeune !";
    else if (age > 10 && age < 16) 
        return "grand, mais t'es encore ado..";
    else 
        return "tu es grand.";
}

int main(){
    char nom[15];
    unsigned short age;

    std::cout << "Bonjour, quel est votre nom ? " << std::endl;
    std::cout << "- ";
    std::cin >> nom;
    std::cout << "Bonjour " << nom << " !" << std::endl;
    std::cout << "Quel age as-tu ?" << std::endl;
    std::cout << "- ";
    std::cin >> age;
    std::cout << "Wow " << nom << ", tu as " << age << " ans, tu es assez " << sentence(age) << std::endl;

    return 0;
}