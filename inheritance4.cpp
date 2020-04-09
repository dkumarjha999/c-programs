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
int y,z;
public:
beta(int j)
{y=j*2;z=j*3;
cout<<" beta is initialised\n";
}
void showy()
{
cout<<" value if y ,z  = "<<y<<"\n"<<z<<"\n";
}
};
class gamma:public alpha, public beta
{
int m,n;
public:
gamma( int a):alpha(a), beta(a)  // with one value only we initialised all class constructor any value can be passsed np
{
m=a*4;n=a*5;					// alpha(a) , beta(a) are constructors call so their values executed on calling sequences
cout<<"gamma initialised\n";
}
void showmn()
{
cout<<"value of m, n = "<<m<<" , "<<n<<"\n";
}
};

int main()
{
int p;
cout<<" enter a number \n";
cin>>p;
gamma g(p);   // calling constructor which contain call for all base and derived class

g.showx();
g.showy();
g.showmn();

return 0;
}

