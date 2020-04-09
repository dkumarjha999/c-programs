#include<iostream>
using namespace std;
class alpha
{
int x;
public:
alpha(int i)
{x=i;
cout<<"alpha is initialised\n";
}
void showx()
{
cout<<"value of x = "<<x<<"\n";
}
};
class beta
{
float y;
public:
beta(float j)
{y=j;
cout<<" beta is initialised\n";
}
void showy()
{
cout<<" value if y = "<<y<<"\n";
}
};
class gamma:public alpha, public beta
{
int m,n;
public:
gamma( int a, float b, int c, int d):alpha(d), beta(b)  // two values are initialised to two class constructor any value can be passsed np
{
m=c;n=a;					// alpha(d) , beta(b) are constructors call so their values executed on that orders
cout<<"gamma initialised\n";
}
void showmn()
{
cout<<"value of m, n = "<<m<<" , "<<n<<"\n";
}
};

int main()
{
int p,q,r;
float s;
cout<<" enter four numbers 4th float \n";
cin>>p>>q>>r>>s;
gamma g(p,s,q,r);   // calling constructor which contain call for all base and derived class

g.showx();
g.showy();
g.showmn();

return 0;
}

