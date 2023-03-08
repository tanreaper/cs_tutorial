#include "Database.cpp"
#include "Student.cpp"
#include <fstream>
using namespace std;

int main() {
    // Student student1;
    // Student student2;
    // Student student1("Anshi", 1);
    // Student student2("Aneesh", 2);

    // Student student3(student2);
    // student1.setInfo("Aneesh", 1);
    // cout << student1.getrollNo() << endl;
    // student3.display();

    // Create an array of objects

    Student students[10];
    fstream newfile;
    int counter = 0;
    newfile.open("studentName.txt", ios::in);
    if (newfile.is_open()) {
        string tp;
        while(getline(newfile, tp)) {
            students[counter].setInfo(tp, counter+1);
            counter++;
        }
    }
    
    students[2].display();
    students[0].display();

    Database db("student.db");
    if (db.db_open()) {
        fprintf(stderr, "Can't open database");
        return (0);
    } else
    {
        fprintf(stderr, "Opened database successfully\n");
    }
    // student2.display();
}

// parse text from a file. 
