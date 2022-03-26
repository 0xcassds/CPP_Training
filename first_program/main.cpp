//Pre build libreries to print and read data from/ to the console

/*
    Print data to the console
    std::cout <<"data" << std:endl;


*/
#include <iostream>


consteval int get_value(){
    return 3;
}
int main(){

    constexpr int value = get_value();
    std::cout << "Value: " << value << std::endl;
    return 0;
}