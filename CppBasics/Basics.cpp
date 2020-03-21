#include <iostream>

int main ()
{
    //Initalization and Assignment

    int a{};        //Variable a is Initialized by default with a 0
    int b{0};       //Variable b is brace initialized with 0
    int c = 0;      //Variable c is direct initialized with 0
    int d;          //Variable d is not Initialized just Defined

    d = 0;          //We assigned a value to d

    //Variables a, b, and c are initialized (Created with an initial value)
    //Variable d has no inital value but is later Assigned with one. 

    std::cout << "Variable a = " << a << "\n";  
    std::cout << "Variable b = " << b << "\n";
    std::cout << "Variable c = " << c << "\n";
    std::cout << "Variable d = " << d << "\n";

    std::cout << "It's always prefered to end a cout with \\n \n";
    std::cout << "Than just using <<endl after the text" << std::endl;

    return 0; 
}