#include<iostream>
using namespace std;
class student
{
    int id;
    string name;
    public:
    void getdata()
    {
        cout<<"Enter the ID : ";
        cin>>id;
        cout<<"Enter the Name: ";
        cin>>name;
    }
    void print()
    {
        cout<<"Student ID: "<<id<<endl<<"Student Name: "<<name<<endl;
    }
    ~student()
    {
        cout<<"Memory is Deallocated";
    }

};
int main()
{
    student *p = new student();
    p->getdata();
    p->print();
    delete(p);
    return 0;
}
