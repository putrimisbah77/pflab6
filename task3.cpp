#include <iostream>
using namespace std;
string checkTitle(int age, char gender);
main()
{
    int age;
    char gender;
    string letter1;

    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter your gender: ";
    cin>>gender;
    letter1=checkTitle(age, gender);
    cout<<letter1;
}
 string checkTitle(int age, char gender)
 { string letter;
 if(age>=16 && gender=='m')
 {
    letter="Mr."; 
 }
 if(age>=16 && gender=='m')
 {
    letter="Mr."; 
 }
 if(age<16 && gender=='m')
 {
    letter="Master."; 
 }
 if(age>=16 && gender=='f')
 {
    letter="Ms."; 
 }
 if(age<16 && gender=='f')
 {
    letter="Miss."; 
 }
 return letter;
 }