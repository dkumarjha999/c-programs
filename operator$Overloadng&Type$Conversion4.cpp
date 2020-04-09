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
 friend complex operator + (complex &a,complex &b); // binary operator overloading outside the class 

};

complex operator + (complex &a,complex &b)  // overloading using friend function so no current object is here tahts why we written both 
{
complex t;		// value using object as  t.x=b.x+a.x; using dot operator with object 
t.x=b.x+a.x;
t.y=b.y+a.y;
return t;
}

int main()
{
complex c1,c2,c3;
c1=complex(2.3, 5.9);
c2=complex(3.4,6.7);

c3=c1+c2; 		// this is invocking operator overloading 


cout<<" first ";
c1.show();

cout<<" second ";
c2.show();

cout<<" third ";
c3.show();

return 0;

}
