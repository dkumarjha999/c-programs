#include<iostream>
#define pi 3.14
using namespace std;
int squarearea(int &);
float circlearea(float &);
int main()
{
int a=10;
float m=7;
cout<<" area of square = ";
cout<<squarearea(a);
cout<<"\n\n";
cout<<" area of circle = ";
cout<<circlearea(m);
cout<<"\n\n";
return 0;
}
int squarearea(int &a)
{
return (a*=a);
}
float circlearea(float &r)
{
return (r=pi*r*r); 
}

