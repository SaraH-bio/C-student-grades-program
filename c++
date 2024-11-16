#include <iostream>
using namespace std;
int main()
{
double sub1;
double sub2;
double sub3;
double sub4;
cout<<"Enter subjects grade";
//enter the subject scores
cin>>sub1>>sub2>>sub3>>sub4;

string name;
cout<<"Enter student name";
//enter student name
cin>>name;
// set the data type and define the process
double average;
average = (sub1 + sub2 + sub3 + sub4)/4;

if (average >= 90)
     cout<<name<<" average equals  "<<average<<"   Grade A";
else if (average >= 80)
     cout<<name<< " average equals  "<<average<<"   Grade B";
else if (average >= 70)
     cout<<name<<" average equals  "<<average<<"   Grade C";
else if (average >= 60)
     cout<<name<<" average equals  "<<average<<"   Grade D";
else 
    cout<<name<<" average equals  "<<average<<"    Grade F";


    return 0;
}
