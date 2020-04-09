 #include<iostream>
#include<string.h>

using namespace std;

class city
{
protected:
char *name;
int l;

public:
city()
{
l=0;
name=new char[l+1];
}

void getname(void)
{
char *c;
c=new char[30];

cout<<" enter city name \n";
cin>>c;
l=strlen(c);
name=new char[l+1];

strcpy(name,c);
}
void show()
{
cout<<" city  = "<<name<<"\n\n";
}

};
int main()
{
int n,x=1,y;
 
cout<<" maxm limit of city\n";
cin>>n;

city *p[n];
do
{
p[n]=new city;
p[n]->getname();
x++;

cout<<" do you want to print more if yes then press 1 else print 0 to stop\n";
cin>>y;

}
while(y);

cout<<"  entered cities are = \n\n";
for(int i=1;i<=x;i++)
{
p[i]->show();     // this fun call is not working bro
}

return 0;
}

