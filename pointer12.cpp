#include<iostream>
using namespace std;

class shape
{
protected:
float a,b;
public:void getdata()
{
cout<<" enter two dimension\n";
cin>>a>>b;
}
virtual void area()=0;

};

class triangle:public shape
{
public:

void area()
{
float ar;
ar=.5*a*b;
cout<<" area of triangle as base, height = "<<a<<" , "<<b<<" is = "<<ar<<"\n\n";
}

};

class rect:public shape
{
public:
void area()
{
float ar;
ar= a*b;

cout<<" area of rectangle with len, bre as = "<<a<<" , "<<b<<" is = "<<ar<<"\n\n";
}
};

int main()
{

triangle T,*t;

rect R,*r;

t=&T;
r=&R;

t->getdata();
t->area();

r->getdata();
r->area();

return 0;
}
