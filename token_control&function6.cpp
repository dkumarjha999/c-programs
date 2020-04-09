#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int p,n,t,x;
double v,r;
cout<<" enter number of combination for principle rate and time \n";
cin>>n;
for(int i=1;i<=n;i++)
{
cout<<" enter "<<i<<" combination of principle rate and time\n";
cin>>p>>r>>t;
x=p;
for(int j=1;j<=t;j++)
{
v=p*(1+r);
p=v;
}
cout<<"\n\n amount "<<v<<" after "<<t<<" year for principle "<<x<<"\n\n";
}
cout<<"\n\n";
}
