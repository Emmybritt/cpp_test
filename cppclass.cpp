#include <iostream>
#include <cstring>

enum week {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
enum account_type {Savings, Current, Deposit};



struct Person {
    Person(int id, int age, std::string name, std::string gender, int salary){
        this->age = age;
        this->id = id;
        this->name = name;
        this->salary = salary;
        this->gender = gender;
    }

    int id;
    int age;
    std::string name;
    std::string gender;
    int salary;


    int return_slary() {
        std::cout << name << age << std::endl;
        return this->salary;
    }
    int return_yr_of_birth() {
        return 2023 - age; 
    }

};


class Account {
    public:
        std::string account_number;
        float account_balance;
        std::string account_type;

        int display() {
        return 1;
    }
};

class Product {
    protected:
        std::string product_name;
        float price;
        int qty;

        int display() {
        return 1;
    }
};

class Student: public Account, public Product {
    public:
        Student(int i, std::string n, float sal, int ag, std::string gend) {
            std::cout << "Constructor Called here" << std::endl;
            this->id = i;
            this->age = ag;
            this->salary = sal;
            this->name = n;
            this->gender = gend;
        }


            int id;
            int age;
            std::string name;
            float salary;
            std::string gender;
            // int account = Account::display();
            // Product::display();
            friend void friend_function(Student s);
            static float rateOfInterest;  
            int val; 

        void insert_val(int i, std::string n, float sal, int ag, std::string gend) {
            this->id = i;
            this->age = ag;
            this->salary = sal;
            this->name = n;
            this->gender = gend;
        }

        void set_account_info(std::string_view acct_no, int acct_bal, std::string acct_type) {
            this->account_balance = acct_bal;
            this->account_number = acct_no;
            this->account_type = acct_type;
        }

        void set_product_info(std::string_view name, float price, int qty) {
            this->product_name = name;
            this->price = price;
            this->qty = qty;
        }

        std::string return_student_data() {
            display_student();
            return name;
        }


        ~Student(){
            std::cout << "Destructor Called here" << std::endl;
        }
        
    private:
        std::string password;
        std::string school;

        void display_student() {
            bool is_male = gender == "male" ? true : false;
            std::cout << std::boolalpha << this->name << " is " << this->age << " years old " << (is_male ? " his " : " her ") << " salary is " << this->salary << "naira with id of "<< this->id << std::endl;
            std::cout << "Rate Of Interest is :" << this->rateOfInterest << std::endl;
        }
};

void friend_function(Student s) {
    std::cout << "This is the id: " << s.id << std::endl;
}

float Student::rateOfInterest = 50;
int main() {
    Student s1 = Student(1, "Ogwu Emmanuel Berit", 400, 22, "male");
    Student s2 = Student(2, "Victory Ajiri", 7500, 20, "female");
    friend_function(s1);

    Person p1 = Person(1, 22, "Emmy britt", "ale", 500000);
    p1.gender = "male";
    p1.salary = 2500;
    std::cout << p1.return_slary() << std::endl;
    std::cout << p1.return_yr_of_birth() << std::endl;
    

    week day;

    std::cout << "========================== Account info starts here ===========================" << std::endl;
    s1.set_account_info("0025105808", 500000, "savings");
    std::cout << s1.account_number << s1.account_type << s1.account_balance << std::endl;
    std::cout << "========================== Account info ends here ===========================" << std::endl;

    // s1.insert_val(1, "Ogwu Emmanuel Berit", 400, 22, "male");
    // s2.insert_val(2, "Victory Ajiri", 7500, 20, "female");
    // s1.display_student();
    // s2.display_student();

    const std::string student = s1.return_student_data();
    const std::string student2 = s2.return_student_data();
    
    std::cout << student << std::endl;
    std::cout << student2 << std::endl;
    return 0;
}