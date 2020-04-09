#include<iostream>
#include<string>

using namespace std;
int main()
{
int n;
cout<<" how many city you want to enter\n";
cin>>n;
string s[n];
for(int i=0;i<n;i++)
{
cout<<"enter "<<i+1<<" city name\n";
cin>>s[i];
}

for(int i=0;i<n;i++)
{
if((s[i].at(0)=='b')||(s[i].at(0)=='c'))   // city name start with b or c
{cout<<"\n"<<s[i]<<"\n";}
}

return 0;
}

