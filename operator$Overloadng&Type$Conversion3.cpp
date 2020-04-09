#include<iostream>
using namespace std;
class complex
{
float x,y;
public:
complex() {}
complex( float real, float imag)
{ x=real;y=imag;}
void show()
{
cout<<" complex number = "<<x<<" + i"<<y<<"\n\n";
}
complex operator + (complex a)
{
complex t;		// binary operator overloading inside the class    here first object act as current object 
t.x=x+a.x;
t.y=y+a.y;
return t;
}
};
int main()
{
complex c1,c2,c3;
c1=complex(2.3, 5.9);
c2=complex(3.4,6.7);
c3=c1+c2;
cout<<" first ";
c1.show();

cout<<" second ";
c2.show();

cout<<" third ";
c3.show();

return 0;

}
