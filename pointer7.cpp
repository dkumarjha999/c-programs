#include<iostream>
using namespace std;

class item
{
int code;
char name[20];
float rs;

public:

 void get()
{
cout<<" enetr item code name and price\n";

cin>>code>>name>>rs;
}

void show()
{
cout<<" item details are \n code = "<<code<<"\n name = "<<name<<"\n pricce = "<<rs<<"\n\n";
}

};

int main()
{

item x;
item *p;  // creating class type pointer

p=&x;    // assining pointer as obj x

x.get();
x.show();

p->get();    // accessing member function with  pointr of obj type

p->show();


return 0;

}
