#include<iostream>
#include<string>

using namespace std;

int main()
{
string s;
cout<<" enter a string \n";
getline(cin,s);
int i=0,x;
x=s.length();
cout<<"entered string is=\n";
while(i<x)
{
cout<<s[i];
i++;
}
cout<<"\n\n";
return 0;
}
