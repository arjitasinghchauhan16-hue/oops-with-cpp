#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Default constructor called" << endl;
    }
     Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized constructor called for " << name << endl;
    }
    Student(const Student& obj) {
        name = obj.name;
        age = obj.age;
        cout << "Copy constructor called for " << name << endl;
    }
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    cout << "Creating object s1:" << endl;
    Student s1;            
    s1.display();

    cout << "\nCreating object s2:" << endl;
    Student s2("Arjita", 20); 
    s2.display();

    cout << "\nCreating object s3:" << endl;
    Student s3(s2);            
    s3.display();

    cout << "\nEntering local scope:" << endl;
    {
        Student s4("Bebo", 17);
        s4.display();
    }   

    cout << "\nEnd of main()" << endl;

    return 0;
}  