#include<iostream>
using namespace std;
class time
{
int m,h;
public:

time(int p)
{
h=p/60;
m=p%60;
}
void show()
{
cout<<" time in hour and mint is = "<<h<<":"<<m<<"\n\n";
}
};
int main()
{

time t(90);


cout<<"  time when  value entered =\n";
t.show();

return 0;
}
