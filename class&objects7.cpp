#include<iostream>
using namespace std;
class sample
{
int a,b;
public:
void setval()
{
a=20;
b=28;
}
void show()
{
cout<<" value of a, b= "<<a<<"  , "<<b<<"\n\n";
}
friend void mean(sample s);
};
int main()
{
sample x;
x.setval();
x.show();
mean(x);
return 0;
}
void mean( sample s)
{
float mean;
mean=(s.a+s.b)/2;
cout<<" mean of datas = "<<mean<<"\n\n";
}
