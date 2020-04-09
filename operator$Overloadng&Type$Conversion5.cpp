#include<iostream>
using namespace std;
class vector
{
int a[5];
public:
vector() {}
void getdata()
{
cout<<" enter five element \n";
for(int i=0;i<5;i++)
cin>>a[i];
}
void show()
{
cout<<" five elements are\n";
for(int i=0; i<5;i++)
 cout<<a[i]<<"  ";
}
void operator * ()
{
int p;
cout<<" \nenter a number from which u want to multiply each element\n";
cin>>p;
for(int i=0;i<5;i++)
a[i]=a[i]*p;
}
};
int main()
{
vector v;
v.getdata();
v.show();

*v;
cout<<" element after multiplication\n";
v.show();
 return 0;
}

