#include <iostream>

int main(int argc, char **argv){
    //Compile error in sintax error
    /*
        main.cpp: In function ‘int main(int, char**)’:
    main.cpp:5:44: error: expected ‘;’ before ‘}’ token
        5 |     std::cout << "Hello World" << std::endl
        |                                            ^
        |                                            ;
        6 | }
        | ~      
    */
    std::cout << "Hello World" << std::endl;

    int x=8/0;
    std::cout << x << std::endl;

}
