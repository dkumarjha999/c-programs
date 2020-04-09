#include<iostream>
using namespace std;
class player
{
protected:
char name[20], gen[5];
int age;
public:
void get1()
{
cout<<"enter name gender and age\n";
cin>>name>>gen>>age;
}
void put1()
{
cout<<"name, gender and ages are =  "<<name<<" , "<<gen<<" , "<<age<<"\n";
}
};

class P:public player
{
protected:
float  ht,wt;
public:
void get2()
{
cout<<"enter height and weight\n";
cin>>ht>>wt;
}
void put2()
{
cout<<"height and weight = "<<ht<<" , "<<wt<<"\n";
}
};
class L
{
protected:
int pin;
char city[20];
public:
void get3()
{
cout<<"enter city name and pin \n";
cin>>city>>pin;
}
void put3()
{
cout<<"city and pin = "<<city<<" , "<<pin<<"\n";
}
};
class game:public P, public L
{
protected:
char gamename[20];

public:
void getdata()
{

cout<<"enter game name\n";
cin>>gamename;


}
void show()
{

cout<<"gamename = ";
cout<<gamename<<"\n\n";
}
};
int main()
{
game g;

g.get1();
g.get2();		  // okk bro u done it
g.get3();
g.getdata();

g.put1();
g.put2();
g.put3();
g.show();

return 0;
}
