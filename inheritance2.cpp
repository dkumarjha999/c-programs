#include<iostream>
using namespace std;
class B
{
int a;
public:
int b;
void getab()
{
cout<<" enter two numbers\n";
cin>>a>>b;
}
void showa()
{
cout<<" value of a,b = "<<a<<" , "<<b<<"\n\n";
}int geta()
{
return a;
}

};

class D:private B    // we have derived b as private so only public data of b will be accessed inside d using member fun bc they will act private
{
int c;
public:

void show()
{
getab();   //  taking value for a,b
showa();        //showing value of a,b
cout<<" value of a,b = "<<geta()<<" , "<<b<<"\n";

}
void mult()
{
c=b*geta();
cout<<" product of numbers = "<<c<<"\n\n";
}
};

int main()
{
D d;
/*
d.getab();
d.showa();
will not work as they are derived privately so only through member fun of d can access their public data only not private data of b

*/

d.show();
d.mult();
return 0;

}




