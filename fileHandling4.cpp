#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;
int main()
{
char st[100];
cout<<" entre a string\n";
cin>>st;
int l=strlen(st);
cout<<" len = "<<l<<"\n\n";

fstream file;
file.open("text", io::in | ios::out);
for(int i=0;i<l;i++)					// check op
{
file.put(st[i]);
}
file.seekg(0);

char c;
while(file)
{
file.get(c);
cout<<c;
}
cout<<"\n\n";

return 0;

}
