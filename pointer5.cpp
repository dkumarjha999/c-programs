#include<iostream>
#include<string.h>
using namespace std;

int main()
{
int l;
char n[20];

cout<<" enter a name\n";
cin>>n;

l=strlen(n);
cout<<" STRING is = \ns";
for(int i=0;i<l;i++)
{
cout<<n[i]<<i[n]<<*(n+i)<<*(i+n);    // all are way to print a string array
}
cout<<" length of string = "<<l<<"\n\n";
l--;

for(int i=0;i<l/2;i++)
{
n[i]=n[i]+n[l-i];     // steps for reversing string;
n[l-i]=n[i]-n[l-i];
n[i]=n[i]-n[l-i];
}

cout<<" reversed name = "<<n<<"\n\n";

return 0;
}
