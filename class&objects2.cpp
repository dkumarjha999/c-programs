#include<iostream>
using namespace std;
class set
{
int m,n;
public:
void input();
void show();
int max();
};
void set::input()
{
int p,q;
cout<<" enter two numbers\n\n";
cin>>p>>q;
m=p;
n=q;
}
void set::show()
{
cout<<" entered numbees = "<<m<<" , "<<n<<"\n\n";
}
int set::max()
{
if(m>n)
return m;
else 
return n;
}
int main()
{
set s;
s.input();
s.show();
 cout<<" maxm of number = "<<s.max();
cout<<"\n\n";
return 0;
}

