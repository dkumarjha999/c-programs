#include<iostream>
#include<string>
using namespace std;

int main()
{
string s1,s2,s3;
cout<<" enter first string\n";
getline(cin, s1);

cout<<" enter second string\n";
getline(cin, s2);

cout<<" enter third  string\n";
getline(cin, s3);

cout<<" 3 strings are \n"<<s1<<"\n"<<s2<<"\n"<<s3<<"\n\n";

int x=s1.compare(s2);

if(x==0)
cout<<" string 1 = 2\n";

else if(x>0)
cout<<" string 1 is greater than 2\n";

else if(x<0)
cout<<" string 2 is greater than 1\n\n";

int a =s1.compare(1,3,s2,2,4);
int d=s2.compare(s2.size()-1,1,s3,s3.size()-1,1);   // compare alphabetically
cout<<" compare between  1to 3 of 1 str and 2 to 4 of str 2 = "<<a<<"\n\n";
cout<<" compare between s2 and s3 from last = "<<d<<"\n\n";
int c=s2.compare(s3);// 
cout<<" compare between s2 and s3 by simply comparision = "<<c<<"\n\n";

cout<<" swaping s1 & s2 \n"<<s1<<"\n"<<s2<<"\n'\n";

swap(s1,s2);

cout<<" aftre swapping s1 &s2 =\n"<<s1<<"\n"<<s2<<"\n\n";

return 0;

}
