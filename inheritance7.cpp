#include<iostream>
using namespace std;
class A
{
public:
void show()
{
cout<<" in A\n";
}
};

class B:public A
{
public:

void show()
{
A::show();    // to print base member using class name
cout<<" in B\n";
}
};

int main()
{
B b;

b.A::show();  // showing base member using object of b;
b.show();    // showing derived class fun

return 0;
}
