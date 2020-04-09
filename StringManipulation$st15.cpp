#include<iostream>
#include<string>
using namespace std;

int main()
{
int i=0,t=0,m;
 
string s,s1("it");
cout<<" enter a string\n";
getline(cin,s);
int x=s.length();
while(i<x)
{
if((s.at(i)=='i')&&(s.at(i+1)=='t')&&((s.at(i+2)!='i')||(s.at(i+2)!='t')))  // when  word it is  present in string we have to count it
{
t++;
}
i++;
}
cout<<" \n\n word it  occuter "<<t<<" times in string = \n"<<s<<"\n\n";


return 0;

}
