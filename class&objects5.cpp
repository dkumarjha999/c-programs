#include<iostream>
using namespace std;
class test
{
int code;
static int cnt;
public:
void setcode()
{
code=++cnt;
}
void showcode()
{
cout<<" object number = "<<code<<"\n\n";
}
static void showcuont(void) 
{
cout<<" count is = "<<cnt<<"\n\n";
}
};
int test::cnt;
int main()
{
test t1,t2;
t1.setcode();
t2.setcode();
test::showcount();
test t3;
t3.setcode();

test::showcount();
t1.showcode();
t2.showcode();
t3.showcode();
return 0;
}

