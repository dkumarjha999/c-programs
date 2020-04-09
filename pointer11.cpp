#include<iostream>
using namespace std;

class base
{
protected:
int b;

public:
 void getdata()
{
cout<<" enter a number\n";
cin>>b;
}

 virtual void display()
{
cout<<" value of b = "<<b<<"\n";
}
};

class derived:public base
{
protected:
int d;
public:
void getval()
{
cout<<" eneter value of b , d\n";
cin>>b>>d;
}

void display()
{
cout<<" value of b , d are = "<<b<<" , "<<d<<"\n\n";
}
};

int main()
{
base b;
derived d ,*d1;
base *p;

p=&b;

p->getdata();
  p->display();

d1=&d;


 d1->getval();
  d1->display();

return 0;

}
