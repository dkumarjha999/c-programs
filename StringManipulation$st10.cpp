#include<iostream>
#include<string>
using namespace std;

int main()
{
string s1,s2,s3,t;
cout<<"  enter firt string\n";
cin>>s1;

cout<<"  enter second string\n";
cin>>s2;

cout<<"  enter third string\n";
cin>>s3;
t=s3;
cout<<" entered three strings are \n"<<s1<<"\n"<<s2<<"\n"<<s3<<"\n\n";

s3=s1+s2+s3;  // adding att string to s3;

cout<<" all  string together = "<<s3<<"\n";

 s1.append(s2);     //append fun can take only one argument at a time
s1.append(t);

cout<<" all  string together = "<<s1<<"\n";

return 0;

}
