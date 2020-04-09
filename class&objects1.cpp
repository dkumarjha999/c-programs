#include<iostream>
using namespace std;
class item
{
int n;
float cost;
public:
void getdata( int num,float cst)
{
n=num;
cost=cst;
}
void show();				// total cost ek baar fir se check kro
};
void item::show()
{

cout<<" item number and cost = "<<n<<" & "<<cost<<"\n";
total+=cost;
cout<<" total cost till now = "<<total<<"\n\n";
}
int main()
{
int a,x;
float b;
cout<<" enter total number of items\n";
cin>>x;
item m[x];
for(int i=0;i<x;i++)
{
cout<<" enter item number and cost \n";
cin>>a>>b;
m[i].getdata(a,b);
}
for(int i=0;i<x;i++)
{
cout<<" entered item number = "<<i+1<<" and cost \n";
m[i].show();
}
return 0;
}
