#include <iostream>
using namespace std;
class student
{
public:
    int marks;
    int age;
    student()
    {
        marks = 90;
        age = 18;
    }
    student(student &obj);
    //  {
    //      marks = obj.marks;
    //      age = obj.age;
    //  }
    void print()
    {
        cout << "The age of student is :" << age << endl;
        cout << "The marks of  stduent are:" << marks << endl;
    }
};
student::student(student &obj)
{
    marks = obj.marks * 2;
    age = obj.age * 2;
}
int main()
{
    student std1;
    cout << "obj 1" << endl;
    std1.print();
    student std2 = std1;
    cout << "obj 2" << endl;
    std2.print();
    // copy constructor exist by default but when we write own copy  constructor then our
    // copy constructor works

    return 0;
}