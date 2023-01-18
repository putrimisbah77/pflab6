#include <iostream>
using namespace std;
double calculateprice(string city, string product, float quantity);
main()
{
    string city;
    string product;
    float quantity;
    float price;

    cout<<"Enter your city: ";
    cin>>city;
    cout<<"Enter your product: ";
    cin>>product;
    cout<<"Enter your quantity: ";
    cin>>quantity;
    price= calculateprice(city, product, quantity);
    cout<<price;

}
 double calculateprice(string city, string product, float quantity)
 {
    float price;
    if(product=="coffee")
    {
        if(city=="sofia")
        {
            price=quantity*0.5;
        }
        if(city=="varna")
        {
            price=quantity*0.45;
        }
        if(city=="plodiv")
        {
            price=quantity*0.4;
        }
    }
    else if(product=="water")
    {
        if(city=="sofia")
        {
            price=quantity*0.8;
        }
        if(city=="varna")
        {
            price=quantity*0.7;
        }
        if(city=="plodiv")
        {
            price=quantity*0.7;
        }
    }
    else if(product=="beer")
    {
        if(city=="sofia")
        {
            price=quantity*1.20;
        }
        if(city=="varna")
        {
            price=quantity*1.10;
        }
        if(city=="plodiv")
        {
            price=quantity*1.15;
        }
    }
    else if(product=="sweets")
    {
        if(city=="sofia")
        {
            price=quantity*1.45;
        }
        if(city=="varna")
        {
            price=quantity*1.30;
        }
        if(city=="plodiv")
        {
            price=quantity*1.35;
        }
    }
    else if(product=="peanuts")
    {
        if(city=="sofia")
        {
            price=quantity*1.60;
        }
        if(city=="varna")
        {
            price=quantity*1.55;
        }
        if(city=="plodiv")
        {
            price=quantity*1.50;
        }
    }
    return price;

 }