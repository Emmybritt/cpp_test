#include <iostream>
#include <iomanip>
#include <ios>
#include <string>

using namespace std;


int main(){
    std::string full_name;
    std::string planet {"Earth. Where the sky is blue"};
    std::string prefered_planet {planet};
    std::string message {"Hello there" ,5};
    std::string weird_message(10, 'e');
    std::string greeting{"Hello World"};
    std::string saying_hello {greeting,6,5};

    std::cout << "Full_name: " << full_name << std::endl;
    std::cout << "Planet: " << planet << std::endl;
    std::cout << "Prefered Planet: " << prefered_planet << std::endl;
    std::cout << "Message: " << message << std::endl;
    std::cout << "Weird Message: " << weird_message << std::endl;
    std::cout << "greeting: " << greeting << std::endl;
    std::cout << "saying_hello: " << saying_hello << std::endl;

    return 0;
}