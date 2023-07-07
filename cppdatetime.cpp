#include <iostream>
#include <concepts>
#include <type_traits>
#include <ctime>



int main() {
    time_t now = time(0);
    std::tm* timeinfo = std::gmtime(&now);
     char* dt = std::ctime(&now);
     std::cout << &now <<dt << std::endl;

     std::cout << "====================== ends here =================" << std::endl;
     tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);

    std::tm *ltm = localtime(&now);
    std::cout << ltm <<std::endl;
        // std::cout << "The month now is: " << timeinfo->tm_mon + 1<< std::endl;
    // std::cout << "The time now is: " << timeinfo->tm_mon + 1<< std::endl;
    // std::cout << "The day is: " << timeinfo->tm_hour<< std::endl;
    return 0;
}
