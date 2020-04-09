#include<iostream>
using namespace std;
class temp
{
float f;
public:
void gettemp()
{
cout<<" enter temperature in farenheight\n";
cin>>f;
}
void show()
{
float c;
c=(5*(f-32))/9;
cout<<f<<" farenheight is = "<<c<<" degree celcious\n\n";
}
};
int main()
{
temp t;
float f,c;
cout<<" enter temperature in farenheight\n";
cin>>f;
c=(5*(f-32))/9;
cout<<f<<" farenheight is = "<<c<<" degree celcious\n\n";
t.gettemp();
t.show();
return 0;
}

