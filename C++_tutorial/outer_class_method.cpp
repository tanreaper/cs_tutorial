#include "common.h"
using namespace std;


class MyClass {        // The class
  private:
    int example;
  public:              // Access specifier private, protected.
    void myMethod();   // Method/function declaration
    void display();
    void setExample(int example) {
      this->example = example; // this keyword is current instatantiation.
    }
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!\n";
}

void MyClass::display() {
  cout << this->example << endl;
}

class Student {
  private:
    string name;
    int roll_no;
    string email_id;
    string activity;

  public:
    Student() {
      cout << "Default Constructor was called" << endl;
    } // Default Constructor
    Student(string, int, string, string); // Parameterized Constructor.
    string getClubActivity(string name);
    void setStudentDetails(string, int, string, string);
    string getName() {
      return name;
    }
};
Student :: Student(string name, int roll_no, string email_id, string activity) { // parameterized constructor.
  this->name = name;
  this->roll_no = roll_no;
  this->email_id = email_id;
  this->activity = activity;
  cout << "Called parameterized constructor " << endl;
}

int main() {

  MyClass myObj;     // Create an object of MyClass instantiation, 
  MyClass myObj2; // Default Constructor.
  // myObj.myMethod();  // Call the method
  // myObj2.myMethod();

  
  myObj.setExample(5);
  myObj2.setExample(10);
  // myObj.display(); // output : 5
  // myObj2.display(); // output : 10

  // Student student1; // Default Constructor
  Student student("Aneesh", 1, "Aneesh@gmail.com", "Football");
  cout << student.getName() << endl;
  

  return 0;
}

