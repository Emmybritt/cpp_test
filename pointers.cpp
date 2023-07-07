#include <iostream>
#include <cmath>
#include <ios>
#include <iomanip>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int* p_number = {nullptr};
    int* p_fractional_number1{nullptr};

    p_number = new int; 
    *p_number = 50;

    std::cout << "This is " << *p_number << std::endl;

    delete p_number;
    p_number = nullptr;


    // std::cout << "This is " << *p_number << std::endl;
    // std::cout << "This is 2" << std::endl;



    // Try Catch Block
    try
    {
        /* code */
    int* data = new int [1000000000000000000];
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    std::cout << "Prograams end well" << std::endl;




    /*
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl; // 4 std:: cout << "sizeof(double) << sizeof (double) << std: :endl; // 8 std: :cout << "sizeof (double*) : " << sizeof (double*) << std: :endl;
    std::cout << "sizeof(int*) : " << sizeof (int*) << std::endl;
    std::cout << "sizeof (p_number1) : " << sizeof(p_number)<< std::endl;
    std::cout << "sizeof (p_fractional_number1) " << sizeof(p_fractional_number1) << std:: endl;
    std::cout << p_number << std::endl;
    std::cout << "Working" << std::endl;
    */

   /*
    const char* p_message { "Hello World!"};
    std::cout << "The message is: " << p_message << std::endl;
    std::cout << "The message is: " << *p_message << std::endl;
    */
    return 0;

} 