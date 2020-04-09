#include<iostream>
#include<string>
using namespace std;

int main()
{
int i=0;
string s;
cout<<" enter a string\n";
getline(cin,s);
int x=s.length();
while(i<x)
{cout<<s.at(i);
if(s.at(i)==' ')   // when  white space is there replace it by underscore
{
cout<<"_";
}
i++;
}
cout<<"\n\n";
return 0;

}
