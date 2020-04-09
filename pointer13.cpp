#include<iostream>
using namespace std;

class shape
{
protected:
float a,b;
public:void getdata( float x, float y=0)
{
a=x;
b=y;
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

class circle:public shape
{
public:
void area()
{
float ar;
ar=(22*a*a)/7;
cout<<" area of circle with radius = "<<a<<" is = "<<ar<<"\n\n";
}
}; 

int main()
{
float m,n;
triangle T,*t;

rect R,*r;

circle C,*c;

c=&C;

t=&T;
r=&R;
cout<<" enter base and height of triangle\n";
cin>>m>>n;
t->getdata(m,n);
t->area();


cout<<" enter length and bredth of rectangle\n";
cin>>m>>n;
r->getdata(m,n);
r->area();

cout<<" enter radius of circle\n";
cin>>m;
c->getdata(m);
c->area();

return 0;
}
