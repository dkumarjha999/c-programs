#include<iostream>
using namespace std;
int t=1;		// this t defined globally to count manager number 
class employee
{
char name[20];
int age;
public:
void getdata()
{
cout<<" enter name and age of manager \n";
cin>>name>>age;
}
void show()
{
cout<<" name of "<<t<<" manager is = "<<name<<"\n\n";
cout<<" age of manager = "<<age<<"\n\n";
t++;
}
};
const int size=3;
int main()
{
employee manager [size];
for(int i=0;i<size;i++)
{manager[i].getdata();}
for(int i=0;i<size;i++)
{manager[i].show();}
return 0;
}
