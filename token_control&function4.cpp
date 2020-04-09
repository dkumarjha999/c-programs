#include<iostream>
using namespace std;
void swap(float &, float &);
int main()
{
float a,b;
cout<<" enter two values \n\n";
cin>>a>>b;
cout<<" value before swaping "<<a<<","<<b<<"\n\n";
swap(a,b);
cout<<" value after swaping "<<a<<","<<b<<"\n\n";
return 0;
}
void swap(float &m,float &n)
{
m=m+n;
n=m-n;
m=m-n;
cout<<" value after swaping "<<m<<","<<n<<"\n\n";
}

