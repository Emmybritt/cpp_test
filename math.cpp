#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int scores[4] = {7,9,8,4};
    string cars[] = {"Volvo", "BMW", "Ford", "Test", "Test", "Test", "Test", "Test"}; // Three array elements

    double weight {7.7};
    double weiggh2 {7.4};
    string result = (weight > weiggh2)  ? "Hello" : "Daniel";
    std::cout << std::floor(weiggh2) << endl;
    std::cout << std::ceil(weiggh2) << endl;
    std::cout << std::abs(weight) << endl;
    std::cout << std::exp(10) << endl;
    std::cout << std::log(8) << endl;
    std::cout << std::round(weight) << endl;
    std::cout << std::round(weiggh2) << endl;
    std::cout << scores[1] << endl;
    scores[1] = 10;
    std::cout<< sizeof(scores) /sizeof(scores[0]) << std::endl;
    std::cout << sizeof(cars) / sizeof(cars[0]) << std::endl;
    std::cout << size(cars) << std::endl;

    int i = 0;
    do
    {
        cout << "I Love c++ " << i * 2 << endl;
        if (i == 5) break;
        
        i++;
    } while (i < 100);
    
    return 0;
 
}