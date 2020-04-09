#include<iostream>
#include<fstream>
#include<iomanip>

int main(int argc, char* argv[])
{
int a[9]={11,22,33,44,55,66,77,88,99};
if((argc)!=3)
{
cout<<" argc ="<<argc<<"\n";
cout<<" error in argument\n";
exit(1)
}
fstream f1,f2;
f1.open(argv[1]);
if(f1.fail())
{
cout<<" could not open the file \n"<<argv[1]<<"\n";
exit(1);
}

f2.open(argv[2]);
if(f2.fail())
{
cout<<" could not open the file\n"<<agrv[2]<<"\n";
exit(1);
}

for(int i=0;i<9;i++)
{
if(a[i]%2==0)
{f2<<a[i]<<"\n";}
else
{f1<<a[i]<<"\n";}
}
f1.close();
f2.close();


fstream fin;
char ch;

for(int i=0;i<argc;i++)
{
fin.open(argv[i]);
cout<<" content of "<<argv[i]<<"\n";
do
{

fin.get(ch);
cout<<ch;
}
while(fin);
cout<<"\n\n";
fin.close();
}
return 0;
}
