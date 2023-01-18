#include <iostream>
using namespace std;
double calculatebudget(int budget, int num_of_people);
double calculatebudget1(float b1, string categorie, int num_of_people);
main()
{
    int budget;
    string categorie;
    int num_of_people;
    float transportation;
    float price;
    float b1;
    float b4;

   cout<<"Enter your budget: ";
   cin>>budget;
   cout<<"Enter your ticket categories: ";
   cin>>categorie;
   cout<<"Enter number of people: ";
   cin>>num_of_people;
   transportation=calculatebudget(budget, num_of_people);
   b1 = budget - transportation;
   b4 = calculatebudget1(b1, categorie, num_of_people);
   
   if(b4>0)
   {
       cout<<"Yes! you have "<<b4<<" QR left";
   }
   if(b4<0)
   {
       cout<<"Not enough money! you need "<<-b4<<" QR";
   }

 }
 double calculatebudget(int budget, int num_of_people)
 {
 float transportation;
  if(num_of_people>=1 && num_of_people<=4)
  {
   transportation=budget*0.75;
   return transportation;
  }
 if(num_of_people>=5 && num_of_people<=9)
 {
  transportation=budget*0.6;
  return transportation;
 }
 if(num_of_people>=10 && num_of_people<=24)
 {
  transportation=budget*0.5;
  return transportation;
 }
 if(num_of_people>=25 && num_of_people<=49)
 {
     transportation=budget*0.4;
     return transportation;
  }
  else
  {
    transportation=budget*0.25;
    return transportation;
  }
  return transportation;

}
 double calculatebudget1(float b1, string categorie, int num_of_people)
 {
  float b2, b3;
  if(categorie=="vip")
  {
    b2 = num_of_people * 499.99;
    b3 = b1 - b2;
    return b3;
  }
  if(categorie=="normal")
  {
    b2 = num_of_people * 249.99;
    b3 = b1 - b2;
    return b3;
  }
  return 0;
 }
  