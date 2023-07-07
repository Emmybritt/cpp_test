#include <iostream>
#include <cmath>
#include <ios>
#include <iomanip>
#include <algorithm>

using namespace std;


int main() {

    // using sizeof to get the length of an array
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    std::cout << size << endl;


    // using std::size to get the length of an array
    int arr2[] = {1, 2, 3, 4, 5, 6};
    int size2 = std::size(arr2);
    std::cout << size2 << endl;



    // for (size_t i {0}; i < std::size(arr3); i++)
    // {
    //   std::cout << "Scores [" << i << " ]: " << arr3[i] << std::endl;
    // }
    int class_sizes[] {10, 12, 5, 11, 18, 17};
    int sum {0};
    for (auto value : class_sizes)
    {
      std::cout << "Scores [" << value << " ]: "   << std::endl;

    }

    for (int element : arr2)
    {
        sum += element;
    }
    std::cout << "Sum is : " << sum <<std::endl;

    std::cout << "---------------------------------------" << std::endl;

    // std::begin and std::end: Returns iterators pointing to the beginning and end of an array.
    int arr4[7] = {1, 2, 3, 4, 5, 3, 3};
    int destination[5];
    int* begin = std::begin(arr4);
    int* end = std::end(arr4);

    std::cout << *begin << std::endl;
    std::cout << *end << std::endl;


    std::copy(std::begin(arr4), std::end(arr4), std::begin(destination));

    for (int value : destination)
    {
       std::cout << "Values of destination" << value << std::endl;
    }

    std::cout << "---------------------------------------" << std::endl;

    int count = std::count(std::begin(arr4), std::end(arr4), 3);

    std::cout << "Counts of arr4 is:" << count << std::endl;


    char message [] {'H', 'e', 'l', 'l', 'o', '\0'};
    char message2 [5] {'H', 'e', 'l', 'l', 'o'};
    char message3[] = {"Hello"};
    std::cout << "message : " << sizeof(message) << std::endl;
    std::cout << "message : " << sizeof(message2) << std::endl;


    // Array Bounds
    std::cout << "---------------------------------------" << std::endl;


    
    
    



    return 0;
}