#include <iostream>


int max(int a, int b);
void enter_bar(unsigned int age);

int main() {
    int age = 9;
    enter_bar(age);
    enter_bar(25);
    for (size_t i = 0; i < 35; i++)
    {
        enter_bar(i);
    }
    std::cout << "Done" << std::endl;
    const int result = max(45, 30);
    std::cout << result << std::endl;
    
    return 0;
}

int max(int a, int b) {
    if (a > b )
    {
        return a;
    }else{
        return b;
    }
    
}

void  enter_bar(unsigned int age) {
   if (age > 18)
   {
    std::cout << "You are " << age << " years old please proceed." <<std::endl;
   }else
   {
    std::cout << " Sorry, you are too young for this. No offence!" <<std::endl;
    
   }
};
