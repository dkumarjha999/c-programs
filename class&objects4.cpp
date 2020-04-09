#include<iostream>
using namespace std;
class item
{
 static int count;
int num;
public:
void getdata( int a)
{ num=a;
count++;
}
void getcount(void)
{cout<<" count = "<<count<<"\n\n";}
};
int item::count;
int main()
{
item a,b,c;
a.getcount();
b.getcount();  // in this all 3 cases count =0;
c.getcount();
a.getdata(100);
b.getdata(1);     // in this case for calling getdata count value will be incremented
c.getdata(200);
a.getcount();
b.getcount();   // in all these case for calling getcount we get finally incremented value of count 
c.getcount();
return 0;
}
