#include<iostream>
#include<memory>
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
        cout<<"Memory is Deallocated"<<endl;
    }

};
int main()
{
    cout<<"Before Scope Starts"<<endl;
   {
    cout<<"Scope Start"<<endl;
    unique_ptr <student> p = make_unique<student>();
    p->getdata();
    p->print();
    cout<<"End of scope"<<endl;
    }
    cout<<"Out of Scope"<<endl;
    return 0;
}
