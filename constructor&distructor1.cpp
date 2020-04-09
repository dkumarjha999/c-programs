#include<iostream>
using namespace std;
class integer		// here we have defined a constructor integer
{
int m,n;
public:
integer(int,int);		 // constructor will be taking two argument 
void show()
{
cout<<" m= "<<m<<" , "<<" n= "<<n<<"\n\n";

}
};
integer::integer(int p,int q)
{m=p;n=q;}
int main()
{
integer int1(0,100);		//initialising value to constructor function by two given method
integer int2=integer(300,30);
int1.show();
int2.show();		// calling function to show the values
return 0;
}
