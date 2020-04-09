#include<iostream>
using namespace std;
int main()
{
int d,n;
float x,f,f1,sum=0;
cout<<" enter angle in degree\n";
cin>>d;
x=(d*3.14)/180;
f=1;
sum=f;
cout<<" angle in radian = "<<x<<"\n\n";
cout<<" enter number of term uto accuracy required\n\n";
cin>>n;
for(int i=1;i<=n;i++)
{
f1=-1*((f*x*x)/((2*i)*(2*i-1)));
sum+=f1;
f=f1;
}
cout<<" value of cos series "<<d<<" degree = "<<sum<<"\n\n";
return 0;
}
