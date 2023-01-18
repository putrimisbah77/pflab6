#include <iostream>
#include <cmath>
using namespace std;
float calculator(string year, int holidays, int weakend);
main()
{
    string year;
    int holidays;
    int weakend;
    float total;
    float total0;
    float total1;
    float total2;
    float total3;

    cout<<"Enter year: ";
    cin>>year;
    cout<<"Enter hlidays: ";
    cin>>holidays;
    cout<<"Enter weakend: ";
    cin>>weakend;
    total = calculator(year, holidays, weakend);
    total0=ceil(total);
    if(year=="normal")
    {
        cout<<total0;
    }
    if(year=="leap")
    {
        total1=(total*15)/100;
        total2=total+total1;
        total3=ceil(total2);
        cout<<total3;
    }
}
 float calculator(string year, int holidays, int weakend)
 {
    float holidays1=holidays*0.66;
    float weakend1=48-weakend;
    float weakend2=weakend1*0.75;
    float total= holidays1 + weakend2;
    return total;
 }



