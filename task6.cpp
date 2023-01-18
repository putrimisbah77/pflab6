#include <iostream>
using namespace std;
float lowestPrice(int kilometer, string time);
main()
{
    int kilometer;
    string time;
    float price1;

    cout<<"Enter number of kilometers: ";
    cin>>kilometer;
    cout<<"Enter time at which you want to travel: ";
    cin>>time;
    price1=lowestPrice(kilometer,time);
    cout<<price1;
}
float lowestPrice(int kilometer, string time)
{
    float price;
    float price1;
    if(kilometer<=20)
    {
        if(time=="day")
        {
          price1=kilometer*0.79;
          price=price1+0.70;
        }
        if(time=="night")
        {
          price1=kilometer*0.90;
          price=price1+0.70;
        }
    }
    if(kilometer>20 )
    {
      price=kilometer*0.09;
    }
    if(kilometer>100 )
    {
      price=kilometer*0.06;
    }
    return price;
}