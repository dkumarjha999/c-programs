#include<iostream>
using namespace std;
inline int max(int a, int b, int c)
{
return((a>b)?(a>c)?a:c:(b>c)?b:c);
}
int main()
{
int a,b,c,d;
cout<<" enter three numbers\n";
cin>>a>>b>>c;
d=max(a,b,c);
cout<<" maxm value = "<<d<<"\n";
return 0;
}


