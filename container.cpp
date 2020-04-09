#include<iostream>
using namespace std;

class worker
{
private:
int no;
float sal;
char name[30];
public:
void getdetail()
{
cout<<" enter employee number , name and salary\n";
cin>>no>>name>>sal;
}

void show()
{
cout<<" employee number , name and salary  = \t"<<no<<"\t"<<name<<"\t"<<sal<<"\n";
}
};

class manager:public worker
{
private:
worker M,w[3];         // class manager containing obj of class worker where M is for manager who is also a worker of same company
public:
     void load()
{
M.getdetail();
  for(int i=0;i<3;i++)
{
w[i].getdetail();
}
}
void print()
{
M.show();
for(int i=0;i<3;i++)
{
w[i].show();
}
}

};

int main()
{
manager m;  			// okk bro but check for fixed number of emoloyee
m.load();
m.print();

return 0;
}

