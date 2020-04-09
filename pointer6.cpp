#include<iostream>
using namespace std;

typedef void(*funptr)(int,int);     //  declaration of function pointer with number and type of argument passed 

void add(int x, int y)
{
cout<<" sum of numbers "<<x<<" , "<<y<<" is = "<<x+y<<"\n\n";
}

void sub( int p,int q)
{
cout<<" subtraction of "<<p<<" , "<<q<<" is = "<<p-q<<"\n\n";
}

int main()
{
int a,b;
funptr p;  // creating a pointer of function pointer
p=&add;   // addressing add to function pointer
cout<<" enter two numbers\n";
 cin>>a>>b;

p(a,b);

cout<<" enter two numbers\n";

cin>>a>>b;

p=&sub;     // adressing fun sub to function pointer
p(a,b);

return 0;
}
