#include<iostream>
#include<string>
using namespace std;

int main()
{
int i=0,t=0;
string s;
cout<<" enter a string\n";
getline(cin,s);
int x=s.length();
while(i<x)
{
if(s.at(i)=='e')   // when  e is  present in string we have to count it
{
t++;
}
i++;
}
cout<<" \n\n e  occuter "<<t<<" times in string = \n"<<s<<"\n\n";
return 0;

}
