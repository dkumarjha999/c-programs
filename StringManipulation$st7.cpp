#include<iostream>
#include<string>
usin namespace std;

int main()
{
string s("ghi");
cout<<" s= "<<s<<"\n";

string s1("abc"+"def");  s1=abcdef
cout<<" s1 = "<<s1<<"\n";
s1+=s;

cout<<" new  s1, s1+s = "<<s1<<"\n";

cout<<s1.c_str();  // dont know what it do

return 0;

}
