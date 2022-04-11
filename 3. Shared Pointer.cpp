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
    cout<<"Outer Scope Starts"<<endl;
    shared_ptr <student> p = make_shared<student>();
    cout<<p.use_count()<<endl;
    {
        cout<<"Inner Scope Starts"<<endl;
        shared_ptr <student> s = p;
        cout<<p.use_count()<<endl;
        cout<<"End of Inner Scope"<<endl;
    }
    cout<<p.use_count()<<endl;
    cout<<"End of Outer Scope"<<endl;
    }
    cout<<"Out of Scope"<<endl;
    return 0;
}
