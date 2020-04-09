#include<iostream>
#include<string.h>
using namespace std;

int main()
{
char *ptr[]={"book"," photocopy"," grossery","sports","electrical"};
char str[20];
cout<<" enter name of item you want to buy\n";
cin>>str;

for(int i=0;i<5;i++)
{
if(i<5)
{

{
if(!strcmp(str, ptr[i]))
cout<<"your item = "<<str<<" is available here\n";

break;
}
}
else if(i==5)      // check else or else if part it is not working properly
{
cout<<" sorry item = "<<str<<" is not available here\n";
}

}

return 0;
}


