#include<iostream>
#include<string>

using namespace std;

int main()
{
string s;
cout<<" enter a string line\n";
getline(cin, s);

cout<<" \nstring is  = \n";

for(int i=0; i<s.length();i++)   // print string
{cout<<s.at(i);}

cout<<" \nstring is = \n";
for(int i=0; i<s.length();i++)    // print string 
{cout<<s[i];}


int x= s.find("ram");
cout<<" \n\nword ram found at position = "<<x<<"\n\n";   // finding word

int y=s.find_first_of('t');

cout<<" t  found first at position = "<<y<<"\n\n";    // finding t from initial


int z=s.find_last_of('q');

cout<<" q is found at "<<z<<"  from last \n\n";   // finding q from last



// retrtiving and print substring 

cout<<s.substr(x,4); // this will print word in x wit given alphabet

cout<<"\n\n";

return 0;

}
