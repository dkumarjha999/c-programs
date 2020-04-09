#include<iostream>
#include<string>
using namespace std;

int main()
{
string s;
cout<<" enter a numeric string of odd num\n";
cin>>s;
int no=s.length();
int n=(no+1)/2;
int sp=n,num,c;

for(int i=1;i<=n;i++)
{
    num=i;

	for(c=1;c<=sp;c++)     // loop for controlling space
	{cout<<" ";}
  sp--;

	for(c=1;c<=i;c++)   // loop for printing left side triangle value
	  {  cout<<num;
		num++;  }
   num--;
    num--;
    	for(c=1;c<=i-1;c++)  // loop for controlling right side triangle
	  {  
		if(num==0)
                {cout<<" ";}
		else
		{
		cout<<num;
		num--; }
	  }

cout<<"\n";   // for each next line

}

return 0;
}
