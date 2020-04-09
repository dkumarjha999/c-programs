#include<iostream>
using namespace std;
class person
{
protected:
int code;
char name[30];
public:
void getdata()
{
cout<<" enter name and code number\n";
cin>>name>>code;;
}

void showdata()
{
cout<<" name of person and code = \t"<<name<<"\t"<<code<<"\n";
}
};

class account:virtual public person
{
protected:
float amt;
public:
void getamt()
{
cout<<" enter amount\n";
cin>>amt;
}
void showamt()
{
cout<<" amount is = "<<amt<<"\n";
}
};

class admin:virtual public person
{
protected:
int exp;
public:
void getexp()
{
cout<<" enter year of experience\n";
cin>>exp;
}
void showexp()
{
cout<<" person has experience of year = "<<exp<<"\n";
}
};

class derson:public account, public admin
{
public:
void show()
{
cout<<" person over all details given as \n\n";
}
};

int main()
{
derson p;
p.getdata();
p.getamt();
p.getexp();

p.show();
p.showdata();
p.showamt();
p.showexp();
 return 0;
}
