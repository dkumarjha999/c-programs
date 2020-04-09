#include<iostream>
using namespace std;
class account
{
char name[20];
double ac;
float bal;

public:
void getdata()
{
cout<<" enter account holder name\n";
cin>>name;
cout<<" enter account holder account number \n";
cin>>ac;
cout<<" enter balance\n";
cin>>bal;
}
void show()
{
cout<<"  \naccount holder name = ";
cout<<name;
cout<<" \naccount holder account number ";
cout<<ac;
cout<<"  \nbalance = ";
cout<<bal;
}
void amount()
{
int ch;
float p;
do
{
cout<<" \nenter 1 to deposit money\n"<<"\nenter 2 for withdrawl\n";
cout<<" \nenter what u want to do \n";
cin>>ch;
switch(ch)
{
case 1:
{
cout<<" \nenter amount to deosit\n";
cin>>p;
bal+=p;
cout<<" \naccount holder name = "<<name<<"\n available balance = "<<bal<<"\n\n";
}break;
case 2:
{
cout<<" \nenter amount to withdrawl\n";
cin>>p;
bal-=p;
cout<<" \naccount holder name = "<<name<<"\n available balance = "<<bal<<"\n\n";
}break;
default:{cout<<" invalid choice\n\n";}
}
}
while(ch<3);
}
};
int main()
{
account a;
a.getdata();
a.show();
a.amount();
return 0;
}



