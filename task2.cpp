#include <iostream>
using namespace std;
int discount(int price, string day, string month);
main()
{
    int price;
    string day;
    string month;
     
    cout<<"Enter price: ";
    cin>>price;
    cout<<"Enter day: ";
    cin>>day;
    cout<<"Enter month: ";
    cin>>month;
    int payableamount=discount(price, day, month);
    cout<<payableamount;
}
 int discount(int price, string day, string month)
 {
     int payable;
    if(day=="sunday" && (month=="october" || month=="March" || month=="August"))
    {
       
        int dis = price * 0.1;
        payable = price - dis;
        return payable;
    }
    if(day=="monday" && (month=="november" || month=="december"))
    {
       
        int dis = price * 0.05;
        payable = price - dis;
        return payable;
    }
   
    else
    {
       return price;
    }
 }