#include <iostream>

int main(int argc, char **argv){
    std::string name;
    std::string lastname;
    std::string fullname;
    std::cout << "Input your name: " << std::endl;
    std::cin >> name;
    std::cout << "Input your lastname: " << std::endl;
    std::cin>> lastname;

    std::cout << "Single text: " << name << lastname<< std::endl;
    std::clog << "Log text" << std::endl;
    std::cerr << "Error text" << std::endl;
    //Using to ignore the new lines in the buffer of CIN
    std::cin.ignore (); 
    std::cout << "Input your name and lastname again: " << std::endl;
    std::getline(std::cin, fullname);

    std::cout << "Single text: " << fullname << std::endl;
    std::clog << "Log text" << std::endl;
    std::cerr << "Error text" << std::endl;

    return 0;
}
