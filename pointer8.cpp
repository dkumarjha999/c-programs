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

int t;
item x;
item *p;  // creating class type pointer

p=&x;    // assining pointer as obj x

cout<<" number of object\n";

cin>>t;

for(int i=0;i<t;i++)    // accessing array of obj using pointer
{
cout<<" enter item "<<i+1<<" detail\n";
p->get();
p++;
}

p=p-t;    // re initioling initial obj adress to use it
for(int i=0; i<t;i++)
{
cout<<" item "<<i+1<<" details are\n";
p->show();
p++;
}

return 0;
}
