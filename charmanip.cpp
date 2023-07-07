#include <iostream>
#include <ios>
#include <cmath>
#include <cctype>
#include <iomanip>
#include <cstring>


int main() {

    char input_char {'j'};
    const char* const new_var = {"Hello Everyone how are you doing"};
    std::cout << std::boolalpha;
    std::cout << std::isalnum(input_char) << std::endl;

    const char* message {"The sky is blue."};

    if (std::isalnum(input_char))
    {
        std::cout << "it is alphanumeric" << std::endl;
    } 
    if(std::isalpha(input_char)){
        std::cout << "input_char is alphabetic" << std::endl;
    }

    if (std::islower(input_char))
    {
        std::cout << "input_char is lower case" << std::endl;
    }

    if (std::isupper(input_char))
    {
        std::cout << "input_char is upper case" << std::endl;
    }
    if (std::isdigit(input_char))
    {
        std::cout << "input_char is isdigit" << std::endl;
    }
    if (std::isxdigit(input_char))
    {
        std::cout << "input_char is isxdigit" << std::endl;
    }
    if (std::iscntrl(input_char))
    {
        std::cout << "input_char is iscntrl" << std::endl;
    }

    char uppercase_char = std::toupper(input_char);

    std::cout << uppercase_char << std::endl;
    std::cout << strlen(message) << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;

    const char * string_data1 {"Alabama"}; 
    const char * string_data2 {"Blabama"};
    std::cout << std::strcmp(string_data1, string_data2) << std::endl;




    
    
    return 0;
}