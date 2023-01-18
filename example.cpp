#include <iostream>
using namespace std;
int isgreatest(int num1, int num2, int num3);
main()
{   
    // string name;
    // int num;
    // int price;
    // string brand;
    int num1;
    int num2;
    int num3;
    int num4;

    cout<<"Enter number1: ";
    cin>>num1;
    cout<<"Enter number2: ";
    cin>>num2;
    cout<<"Enter number3: ";
    cin>>num3;
    num4=isgreatest(num1, num2, num3);
    cout<<num4<<" is grater.";

    
    // cout<<"Enter your name: ";
    // cin>>name;
    // cout<<"Enter your nunmber: ";
    // cin>>num;
    // if(num==501 && name=="Ali") //using logical oprater
    // {
    //     cout<<" Welcome Ali.";
    // }
    // else
    // {
    //     cout<<"Try agin.";
    // }


    // cout<<"Enter price: ";
    // cin>>price;
    // cout<<"Enter brand: ";
    // cin>>brand;

    // if(price<=1500)
    // {
    //     cout<<"Buy the dress!";
    // }
    // else
    // {
    //     cout<<"Do not buy the dress!";
    // }

}
int isgreatest(int num1, int num2, int num3)
    { 
        if(num1>num2 && num1>num3)
        {
            return num1;
        }
        else if(num2>num1 && num2>num3)
        {
            return num2;
        }
        else if(num3>num2 && num3>num1)
        {
            return num3;
        }
        else
        {
            cout<<"try agin.";
        }
        return 0;
    }
    