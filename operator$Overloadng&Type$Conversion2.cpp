#include<iostream>
using namespace std;
class space
{
int x,y,z;
public:
space() {}
void getdata(int a,int b,int c)
{x=a;y=b;z=c;}
void show()
{
cout<<" values are "<<x<<" , "<<y<<" , "<<z<<"\n\n";
}
friend void operator - (space &t);  // here we have used the concept of operator overloading outside  the class as friend   we have written 
				      //   return type operator keyword  then sign of operator and argument passed 
};
void operator - (space &t)
{
t.x=-t.x;t.y=-t.y;t.z=-t.z;
}

int main()
{
space m;
int p,q,r;
cout<<"enter three numbers \n";
cin>>p>>q>>r;
m.getdata(p,q,r);
m.show();

cout<<" value after operator overloading\n";
-m;	// this is used for calling operator
m.show();
return 0;
}
