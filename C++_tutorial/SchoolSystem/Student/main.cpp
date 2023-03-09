#include "Database.cpp"
#include "Student.cpp"
#include <fstream>
using namespace std;

int main()
{
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
    if (newfile.is_open())
    {
        string tp;
        while (getline(newfile, tp))
        {
            students[counter].setInfo(tp, counter + 1);
            students[counter].display();
            counter++;
        }
    }

    // students[2].display();
    // students[0].display();
    const char *sql = "CREATE TABLE STUDENT("
                      "ID INT PRIMARY KEY     NOT NULL,"
                      "NAME           TEXT    NOT NULL,"
                      "AGE            INT     NOT NULL,"
                      "ADDRESS        CHAR(50),"
                      "EMAIL_ID       CHAR(50));";
    
    Database db("student.db", sql);
    // Database db2("teachers.db");
    db.db_open();
    db.db_exec();
    // db2.db_open();
    // student2.display();
    return 0;
}

// parse text from a file.
