#include<iostream>
using namespace std;

int main()
{
int n;
cout<<" enter number of element of an array\n";
cin>>n;

float a[n],*ptr,total=0,t1=0;

cout<<" enter "<<n<<" element of array\n";
for(int i=0;i<n;i++)
{
cin>>a[i];
}

ptr=a;

cout<<" entered "<<n<<" element of array \n";

for(int i=0;i<n;i++)
{
cout<<*ptr<<"\t";
if(i%2==0)
{
t1+=*ptr;
}
total+=*ptr;
ptr++;
}

cout<<" \n\nsum of all element of array is =\t"<<total<<"\n\n";
cout<<" \n\nsum of all element of array at odd position is =\t"<<t1<<"\n\n";


return 0;

}


