#include<iostream>
#include<string>
using namespace std;

void disp(string &r)
{
cout<<" string is = "<<r<<"\n\n";
cout<<" size of string = "<<r.size()<<"\n\n";
cout<<" length of string = "<<r.length()<<"\n\n";
cout<<" capaciy of string  = "<<r.capacity()<<"\n\n";
cout<<" maxm size of string = "<<r.max_size()<<"\n\n";
cout<<" empty string "<<(r.empty()?" yes ":" no ")<<"\n\n";    // for checking string empty or not

}

int main()
{
string s;
disp(s);   // passing void string 

cout<<" enter a string \n";   // taking ip for string 
getline(cin, s);

cout<<" status now  \n\n";

disp(s);

s.resize(30);   // resizing string 

cout<<" string status after resizing \n";
disp(s);

return 0;

}

