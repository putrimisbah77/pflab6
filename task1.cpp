#include <iostream>
using namespace std;
char calculategrade(int marks);
main()
{
    int marks;
    char grade1;
    

    cout<<"Enter your marks: ";
    cin>>marks;
    grade1=calculategrade(marks);
    cout<<grade1;

}
 char calculategrade(int marks)
 {
    char grade;
    if(marks<50)
    {
      grade= 'F';
    }
    else if(marks>=50 && marks<=60)
    {
    grade= 'E';
    }
 
    else if(marks>60 && marks<=70)
    {
    grade= 'D';
    }
 
    else if(marks>70 && marks<=80)
    {
    grade= 'C';
    }
 
    else if(marks>80 && marks<=81)
    {
       grade= 'B';
    }
    
 
 else
 {
    grade= 'A';
 }
 return grade;
 }
