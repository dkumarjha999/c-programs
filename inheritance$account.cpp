#include<iostream>
using namespace std;

class acount
{
protected:
long int acno;
char name[30];
public:
void getdetail()
{
cout<<" enter accnount number and customer name\n";
cin>>acno>>name;
}
void showdetail()
{
cout<<" aaccount number = "<<acno<<"\n"<<" account holder name = "<<name<<"\n";
}

};

class saving:public acount
{
protected:
float rs,total,roi;
int tm;
public:
void getamount()
{
cout<<" enter amount time period\n";
cin>>rs>>tm;
}
void show()
{
cout<<" your balance is = "<<rs<<"\n";
}

void update()
{
roi=8.5;
total=rs;
for(int i=1;i<=tm;i++)
{
total+=(total*roi)/100;
}
rs=total;
cout<<" your balance after "<<tm<<" years is = "<<rs<<"\n";

}
void withdrawl()
{
float amt;
cout<<" enter amount to withdrawl\n";
cin>>amt;
rs=rs-amt;

cout<<" your remaining bal = \n";
}
};

class current:public acount
{
protected:
float rs,rem;
public:
void getamount()
{
cout<<" enter amount\n";
cin>>rs;
}

void show()
{
cout<<" your balance = "<<rs<<"\n";
}

void withdrawl()
{
float amt;
cout<<" enetr amount to withdraw\n";
cin>>amt;
rs=rs-amt;
cout<<" your remaining balance = \n";
}

void update()
{
if(rs<=2000)
{
rs=rs-11.9;
cout<<" low balance\n";
}
}
};
int main()
{
int ch;
cout<<" enter 1 for saving account without cheque\n";
cout<<" enter 2 for current account with cheque\n";
cout<<" enter your choice\n";
cin>>ch;
switch(ch)
{
case 1:
{
saving s;

s.getdetail();
s.getamount();
s.update();
s.showdetail();
s.show();
s.withdrawl();
s.show();
}break;

case 2:
{
current c;
c.getdetail();
c.getamount();

c.showdetail();
c.show();

c.withdrawl();
c.update();
c.show();
}
break;

default: cout<<" invalid choice\n";
}
return 0;
}






