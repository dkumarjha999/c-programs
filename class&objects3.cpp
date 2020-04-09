#include<iostream>
using namespace std;
const int m=50;
class item
{
int code[m];
float price[m];
int count;
public:					// okk keep it up !!!!!!
void cnt()
{count=0;}
void getitem();
void showsum();
void remove();
void display();
};
void item::getitem()
{
cout<<" enter item code and price \n";
cin>>code[count]>>price[count];
count++;
}
void item::showsum()
{
float total=0;
for(int i=0;i<count;i++)
{
total+=price[i];
}
cout<<" total price now = "<<total<<"\n\n";
}
void item::remove()
{
int a;
cout<<" enter an item code to remove it \n";
cin>>a;
for(int i=0;i<count;i++)
{
 if(a==code[i])
   {price[i]=0;}
}
}
void item::display()
{
cout<<" your all items and its price = \n\n";
for(int i=0;i<count;i++)
{
cout<<" item = "<<i+1<<" code = "<<code[i]<<" price = "<<price[i]<<"\n\n";
}
}
int main()
{
item p;
p.cnt();

int x;
do
{
cout<<" enter 1 for adding an item \n"<<" 2 for  showing total price \n"<<" 3 for delete an item \n"<<" 4 for show final list of all items and price \n";
cout<<" enter your choice \n";
cin>>x;
switch(x)
{
case 1:
{
p.getitem();
}break;
case 2:
{  
p.showsum();
}break;
case 3:
{
p.remove();
}break;
case 4:
{
p.display();
}break;
default:{cout<<" invalid choice\n";}
}
}
while(x<5);
}
