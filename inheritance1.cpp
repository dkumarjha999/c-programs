#include<iostream>
using namespace std;
class B
{
int a;
public:
int b;
void getab()
{
a=2;
cout<<"enter value of a,b\n";
cin>>a>>b;
}
int geta()
{
return a;
}
void showa()
{
cout<<" values of a, b is = "<<a<<" , "<<b<<"\n";
}
};
class D:public B   // inheriting B in class D
{
int c;
public:
void mult()
{
c=b*geta();     // accessing public member and member fun
}
void show()
{
cout<<" values of a, b is = "<<geta()<<" , "<<b<<"\n";
cout<<" product of a,b = "<<c<<"\n\n";
}

};

int main()
{
D d;
d.getab();  // accesssing base class using derived class obj
d.showa();
d.mult();    // derived class fun
d.show();

d.b=20;      // giving value to public member of base class using derived class obj
d.showa();
d.mult();
d.show();

return 0;
}

