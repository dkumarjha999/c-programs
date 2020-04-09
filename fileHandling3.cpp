#include<iostream>
#include<fstream>

using namespace std;

int main()
{
const int size=80;
char line[size];

ifstream fin1,fin2;
fin1.open("country");    	// already existing file for country and capital
fin2.open("capital");

for(int i=0;i<5;i++)			// only 3 name of country and capital so output of next 4th is invalid
{
	if(fin1.eof()!=0)
	{
	cout<<" exit from country\n";}

fin1.getline(line,size);
cout<<" capital of "<<line<<"\t";

	if(fin2.eof()!=0)
	{cout<<" exit from capital\n";}
fin2.getline(line,size);
cout<<line<<"\n\n";
}
return 0;


}
