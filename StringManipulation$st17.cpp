#include<iostream>
#include<string>

using namespace std;
int main()
{
int n;
cout<<" how many country  you want to enter\n";
cin>>n;
string s[n],t;
for(int i=0;i<n;i++)
{
cout<<"enter "<<i+1<<" country name\n";
cin>>s[i];
}

/*
for(int i=0;i<n;i++)
{
for(int i=0;i<n-1;i++)
  {

	if(s[i+1].at(i)<=s[i].at(i))   // wrong method of sorting
	{
	t=s[i+1];
	s[i+1]=s[i];
	s[i]=t;
	}
  }

}

cout<<" \narranged city name \n";
for(int i=0;i<n;i++)
{
cout<<s[i]<<"\n";
}
*/


for(int i=0;i<n;i++)
{
for(int i=0;i<n-1;i++)
  {

	if((s[i+1].compare(s[i])<=0))   // sorting city name based on dictionary order
	{
	t=s[i+1];
	s[i+1]=s[i];
	s[i]=t;
	}
  }

}

cout<<" \narranged city name \n";
for(int i=0;i<n;i++)
{
cout<<s[i]<<"\n";
}
return 0;
}

