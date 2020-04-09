#include<iostream>
using namespace std;
class time
{

int m,h;
public:

void gettime()
{
cout<<"enter time in hour and minute\n";
cin>>h>>m;
}
void show()
{
cout<<"given time in hour and minute is = "<<h<<" , "<<m<<"\n\n";
}

friend void add(time t);
}p;

int main()
{

p.gettime();
p.show();
add(p);
return 0;
}
void add(time t)
{

int x;
x=(t.h)*60+t.m;
cout<<"total time = "<<x<<"\n\n";

}
