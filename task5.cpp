#include <iostream>
using namespace std;
float totalIncome(int row, int column, string screen);
main()
{
    int row;
    int column;
    string screen;
    float profit;

    cout<<"Enter number of rows: ";
    cin>>row;
    cout<<"Enter number of column: ";
    cin>>column;
    cout<<"Enter screen: ";
    cin>>screen;
    profit=totalIncome(row, column, screen);
    cout<<profit;
}
 float totalIncome(int row, int column, string screen)
 {
    int totalmember;
    float totalprice;
    totalmember = row*column;
    if(screen=="premiere")
    {
        totalprice=totalmember*12.00;
    }
    if(screen=="normal")
    {
        totalprice=totalmember*7.50;
    }
    if(screen=="discount")
    {
        totalprice=totalmember*5.00;
    }
    return totalprice;
 }