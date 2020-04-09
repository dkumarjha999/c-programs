#include<iostream>
using namespace std;
class M
{
protected: int m;
public:
void getm()
{
cout<<" enter a number\n";
cin>>m;
}
};
class O
{
protected:
int o;
public:
void geto()
{
cout<<" enter a number\n";
cin>>o;
}
};
class N:public O
{
protected: int n;
public:
void getn()
{
cout<<" enter a number \n";
cin>>n;
}
};

class P:public M,public N
{
public:
void show()
{
cout<<" numbers are "<<m<<" , "<<n<<" , "<<o<<"\n";
}
};

int main()
{
P p;
p.getm();
p.getn();
p.geto();
p.show();

return 0;
}
