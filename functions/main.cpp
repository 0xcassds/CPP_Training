#include <iostream>

int addNumbers(int n1, int n2)
{
    return n1+n2;
}

int main(int argc, char **argv){

    int first_number {3};
    int second_number (4+5);

    std::cout << "S: " << addNumbers(first_number,second_number) << std::endl;



    return 0;
}
