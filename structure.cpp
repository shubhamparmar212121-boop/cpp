#include<iostream>
using namespace std;
struct student
{
    char name[50];
    int roll;
    float marks;

};
int main(){
    student s;
    cout<<"enter information ,"<<endl;
   
     cout<<"Enter name: ";
    cin>>s.name;
     cout<<"Enter roll: ";
    cin>>s.roll;
     cout<<"Enter marks: ";
    cin>>s.marks;

    cout<<"Displaying Information: "<<endl;
    cout<<"Name : "<<s.name<<endl;
    cout<<"roll : "<<s.roll<<endl;
    cout<<"marks : "<<s.marks<<endl;
    return 0;
}