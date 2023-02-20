#include <iostream>
using namespace std;

class Student {
    private:
        string name;
        int roll_no;
        string email_id;
        string activity;

    

    public:
        // Constructors.
            // 1. Default Constructor
            // 2. Parameterized Constructor
            // 3. Copy Constructor.
        
        Student() { // Default constructor
            this->name = " Aneesh ";
            cout << "Default Constructor got called\n";
        }
        
        Student(string, int); // parameterised
        Student(const Student &);

          // Getters and Setters.
        void setInfo(string name, int roll_no) {
            this->name = name;
            this->roll_no = roll_no;
        }
        string getName() {
            return name;
        }

        int getrollNo() {
            return roll_no;
        }

        void display();
};

Student::Student(string name, int roll_no) { // parameterised constructor
    this->name = name;
    this->roll_no = roll_no;
    cout << "Parameterized Constructor got called" << endl;
}
void Student::display() {
    cout << this->name << endl;
}

Student::Student(const Student &student) {
    name = student.name;
    roll_no = student.roll_no;
    cout << "Copy constructor got called" << endl;
}