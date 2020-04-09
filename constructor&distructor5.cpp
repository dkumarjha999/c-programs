				// A copy constructor is used to declare and initialize object from another object given its example here 
#include<iostream>
using namespace std;
class code
{
int id;
public:
code() {} 		// constructor without argument do nothing constructor for creating free obj like code c=a;
code(int a)
{id=a;}
			// constructor taking one argument 



code(code &x)			// CONSTRUCTOR referencing object as argument so it is aclled copy constructor 
{id=x.id;}
void show()
{
cout<<" id value = "<<id<<"\n\n";
}
};
int main()
{
int p;
cout<<" enetr a value \n\n";
cin>>p;
code a(p);
code b(a);      // calling copy constructor 
code c=a;
			//again calling copy constructor
		

code d;
d=a; 			// here we are not using copy constructor because we have created obj d and then it is not initialised

	
a.show();
b.show();		// here a reference variaable has been used as an argument to the copy constructor 
c.show();			//we cant pass the argument by a value to a copy contructor
d.show();
return 0;
}
