#include <iostream>
using namespace std;
string checkSpeed(float speed);
main()
{
    float speed;
    string speed1;

    cout<<"Enter speed: ";
    cin>>speed;
    speed1=checkSpeed( speed);
    cout<<speed1;
}
 string checkSpeed(float speed)
 {
    string speed1;
    if(speed<=10)
    {
      speed1="Slow";
    }
    else if(speed>10 && speed<=50)
    {
      speed1="average";
    }
    else if(speed>50 && speed<=150)
    {
      speed1="fast";
    }
    else if(speed>150 && speed<=1000)
    {
      speed1="ultra-fast";
    }
    else
    {
        speed1="extremely fast";
    }
    return speed1;
 }