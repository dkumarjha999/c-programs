#include<iostream>
using namespace std;
class room
{
int len,bre;
public:
room()
{
len=0;bre=0;
}
room( int val=8)
{
len=bre=8;
}
void show()
{
cout<<" length and bredth = "<< len<<"  ,  "<<bre<<"\n\n";
}
};
int main()
{
room objroom1(5);
objroom1.show();		// here we should call function very precisely because both the function we have defined can work for without
			// passing any argument so then it shows error otherwise it will work when we pass some argument second fun



return 0;
}

