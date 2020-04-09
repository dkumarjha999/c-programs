#include<iostream>
#include<string>

using namespace std;

int main()
{

string s1("12345");
string s2("abcde");

cout<<" string s1 = "<<s1<<"\n\n";

cout<<" string s2 = "<<s2<<"\n\n";

// inserting s2 inside s1 after 4th place

s1.insert(4,s2);    // after 4th position s2 will be placed and last char will be 5

cout<<"modified string s1 = "<<s1<<"\n\n";


// erasing 3  character from s1 after 4th position

s1.erase(4,3);

cout<<"modified erased  string s1 = "<<s1<<"\n\n";   // 3 char  after 4th position will be removed

// replacing 2 charactre of s2 by s1 after 1st position

s2.replace(1,2,s1);

cout<<" modified string s2 = "<<s2<<"\n\n";    // bc will be replaced by s1

return 0;
}

