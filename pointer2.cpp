#include<iostream>
using namespace std;

int main()
{
float a,*ptr;

cout<<" enter a number\n";
cin>>a;

ptr=&a;

cout<<" value of a = "<<a<<"\n\n";

cout<<" value of a divided by 2 is  = "<<(*ptr/2)<<"\n\n";   //  cout<<*ptr  i.e printing value of pointer using dereferencing


return 0;
}
