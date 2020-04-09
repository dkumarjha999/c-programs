#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n;
float sum=0;
cout<<" enter the limit for series\n\n";
cin>>n;
for(int i=1;i<=n;i++)
{cout<<pow(1/i,i);}

       cout<<" sum of series = "<<sum<<"\n\n";

    return 0;
}
