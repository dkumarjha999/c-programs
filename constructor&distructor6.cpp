			// in this program we have used two onstructor first is empty constructor that allow us to declare any array of string 
		// second constructor initialize the length of string  , allocate the necessary space for the string to be stored and create the 
	//string itself we have added +1 in length for terminator of string which is  '\0'



#include<iostream>
#include<string.h>
using namespace std;
class strin
{
char * name;
int len;
public:
strin()		// constructor 1 
{
len=0;
name=new char[len+1];
}
strin(char *s)			// constructor 2 is used here
{

len=strlen(s);
name=new char[len+1];			//dynamic allocation dis done here 
strcpy(name,s);
}
void show()
{
cout<<" name = "<<name<<"\n\n";
}
void join(strin &a,strin &b);
};
void strin::join(strin &a,strin &b)
{
len=a.len+b.len;  	//finding total length for final name 
delete name;
name=new char[len+1];

strcpy(name,a.name);

strcat(name,b.name);

};
int main()
{
char *first="joseph";

strin name1(first),name2("louis"),name3("lagrange"),s1,s2;

 s1.join(name1,name2);

s2.join(s1,name3);

name1.show();
name2.show();
name3.show();
s1.show();
s2.show();

return 0;
}
