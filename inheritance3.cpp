#include<iostream> 
using namespace std;
class stud
{
protected:
int no;
public:
void getno()
{
cout<<" enter student roll number\n";
cin>>no;
}
void showno()
{
cout<<" studnt roll number is = "<<no<<"\n";
}
};

class test:public stud
{
protected:
float sub[5];
public:
void getmarks()
{
cout<<" enter marks of student in 5 subjects\n";
 for(int i=0;i<5;i++)
{cin>>sub[i];}
}
void showmarks()
{
cout<<" marks of student in 5 subjects are\n";
for(int i=0;i<5;i++)
{cout<<sub[i]<<"\n";}
}
};

class result:public test
{
protected:
float total,per;
public:
void showresult()
{
total=0;int cnt=0;
for(int i=0;i<5;i++)
{
if(sub[i]>=40)
{cnt++;}
total+=sub[i];
}
per=(total*100)/500;

showno();
showmarks();
cout<<"total marks in 5 sub = "<<total<<"\n";
cout<<" percentage obtained = "<<per<<"\n";

if(cnt==5)
{
cout<<" CONGRAT'S YOU ARE PASS \n";
}
else
{
cout<<" SORRY YOU FAILED\n";
}
}
};

int main()
{
int n;
cout<<"enter a number\n";
cin>>n;
result r[n];
cout<<" enter detil of studens and get result\n";
for(int i=1;i<=n;i++)
{
r[i].getno();   //  without array okkk not working for array 
r[i].getmarks();
r[i].showresult();
}                       // grt work bro keep it up
return 0;
}
