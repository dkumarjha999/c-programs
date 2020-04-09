#include<iostream>
using  namespace std;
class complex
{
float  x,y;

public:
complex()
{  }
complex(float real,float imag=0)
{
x=real;
y=imag;
}
friend void show(complex);
};
void show(complex p)
{
cout<<p.x<<"+j"<<p.y<<"\n\n";

}
int main()
{
complex c,d;
c=complex(3.0);
d=complex(4.5,3.9);
show(c);
show(d);
return 0;

}

