#include<iostream>
using namespace std;
  
class Person
{
    private:
        int id;
        char name[100]; // string = array of character
    
    public:
        Person() {
            this->id = 10;
            cout << "this is parent constructor" << endl;
        }
        void set_p() // setter
        {
            cout<<"Enter the Id:";
            cin>>id;  // scanf()
            fflush(stdin);
            cout<<"Enter the Name:";
            cin.get(name,100); 
        }
    
        void display_p()
        {
            cout<<endl<<id<<"\t"<<name<<"\t";
        }
        
        int get_id() { // getter for id
            return this->id;
        }

        char *get_name() { //  getter for name
            return this->name;
        }

};
  
class Student: public Person //inheritance
{
    char course[50];
    int fee;
      
    public:
    void set_s()
        {
            set_p();
            cout<<"Enter the Course Name:";
            fflush(stdin);
            cin.getline(course,50);
            cout<<"Enter the Course Fee:";
            cin>>fee;
        }
          
        void display_s()
        {
            display_p();
            cout<<course<<"\t"<<fee<<endl;
        }
};
  
int main()
{
    Student s; // child object
    s.set_p();
    cout << "The id of parent class is " << s.get_id()<< endl;
    cout << "The name of parent class is " << s.get_name() << endl;


    // s.set_s();
    // s.display_s();
    return 0;
}