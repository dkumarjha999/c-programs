#include<iostream>
#include<string>

using namespace std;
int main()
{
int n,t=0;
cout<<" how many word  you want to enter\n";
cin>>n;
string s[n];
for(int i=0;i<n;i++)
{
cout<<"enter "<<i+1<<" word name\n";
cin>>s[i];
}

for(int i=0;i<n;i++)
{
if(s[i].at(0)=='s')   // word whose name start with s
{
cout<<"\n"<<s[i]<<"\n";
t++;
}

}
cout<<" total "<<t<<" words whose name started with alphabet s \n\n"; 
return 0;
}

