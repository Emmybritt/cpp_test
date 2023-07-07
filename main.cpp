#include <iostream>
#include <iomanip>
#include <ios>
#include <limits>
using namespace std;

int square(int num) {
    return num * num;
}


int main() {
    int ta = 3.1415926535897932384626433832795;
    std: cout << std::setfill('-'); // The fill character
    std::cout << std::setw(90) << "Lastname" << std::setw(30) << "Firstname" << std::setw(10) << endl;
    std::cout <<  "Lastname" << "Firstname" << endl;
    // std::cout << std::setprecision(50);
    std::cout << std::showpoint;
    std::cout << ta << endl;

    std::cout << "The range for short is from " << std::numeric_limits<short>::min() << " to " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "The range for unsigned short is from " << std::numeric_limits<unsigned short>::min() << " to " << std::numeric_limits<unsigned short>::max() << std::endl;
    std::cout << "The range for int is from " << std::numeric_limits<int>::min() << " to " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "The range for unsigned int id from " << std::numeric_limits<unsigned int>::min() << " to " << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "The range for long is from " << std::numeric_limits<long>::min() << " to " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "The range for unsigned long is from " << std::numeric_limits<unsigned long>::min() << " to " << std::numeric_limits<unsigned long>::max() << std::endl;
    std::cout << "The range for float is from " << std::numeric_limits<float>::min() << " to " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "The range for double is from " << std::numeric_limits<double>::min() << " to " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "The range for long float is from " << std::numeric_limits<long double>::min() << " to " << std::numeric_limits<long double>::max() << std::endl;\
    std::cout << std::boolalpha;
    std::cout << "The range for bool is from " << std::numeric_limits<bool>::is_specialized << " to " << std::numeric_limits<bool>::max() << std::endl;
    return 0;
}


