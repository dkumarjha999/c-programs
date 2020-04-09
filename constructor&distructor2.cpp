#include<iostream>
using namespace std;
class complex
{
float x,y;
public:

complex()		//this is called do nothing constructor with this we have only created object as complex p,q,r;
			// without initialising value of it so it is needed when we will created any uninitialized vale object its imp **
{  }

complex(float a)	// this is one value constructor as its input 
{ x=y=a;}

complex(float real, float imag)		// this constructor taking two argument as its input value 
{
x=real;
y=imag;
}
friend complex sum(complex, complex);		// friend function used for adding two objects 
 friend void show(complex);		// this is used for printing value 

};
complex sum( complex c1,complex c2) 		 // two object as argument is passed and return an object which has addition value 
{
complex c3;
c3.x=c1.x+c2.x;
c3.y=c1.y+c2.y;
return c3;
}
void show(complex c)
{ cout<<c.x<<"+j"<<c.y<<"\n\n";}
int main()
{
complex a(2.7 ,3.5); 		// calling constructor directly 
complex b(1.9);
complex c;
c=sum(a,b);

cout<<" complex a=";show(a);
cout<<" complex b=";show(b);  		 // two show result 
cout<<" complex c=";show(c);

complex p,q,r;
p=complex(2.4,4.9);		// this object initialisation is possible only due to do nothing constructor
q=complex(1.7);
r=sum(p,q);

cout<<" complex p=";show(p);
cout<<" complex q=";show(q);
cout<<" complex r=";show(r); 		// keep it upp!!!!   *******

return 0;
}

