#include<iostream>
#include<cmath>
using namespace  std;
int main()
{
   int age,height,property;
   string status;
cout<<"Enter your age: ";
cin>>age;
//1
if(age<=20)
{
cout<<"Enter your height: ";
cin>>height;
if(height<160)
status="UNFRIEND";
else if(height<175)
{
    status="FRIEND";
}
else
{
cout<<"Enter your property: ";
cin>>property;
if(property>69*pow(10,6))
{
    status="MARRIED";
}
else
{
    status="ONE-NIGHT-STAND";
}

}
}
//2
else if(age<30)
{
cout<<"Enter your property: ";
cin>>property;
if(property>pow(10,7))
{
    status="BEST FRIEND";
}
else
{
    status="UNFRIEND";
}
}
//3
else 
{
    status="UNFRIEND";
}
cout<<"Your status = "<<status;
}
   


