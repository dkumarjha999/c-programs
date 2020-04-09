#include<iostream>
using namespace std;

class stud
{
protected:
int no;
char name[20];
public:
void getdetail()
{
cout<<" enter name and roll number\n";
cin>>name>>no;
}

void showdetail()
{
cout<<" student name and roll number = "<<name<<" , "<<no<<"\n";
}
};

class test:public stud
{
protected:
float mark[5];
public:
void getmark()
{
cout<<" enter mark in 5 sub\n";
for(int i=0;i<5;i++)
{cin>>mark[i];}
}
void showmark()
{
cout<<" marks in 5 sub are\n";
for(int i=0;i<5;i++)
{
cout<<mark[i]<<"\n";
}
}

};
class sports
{
protected:
float score;
public:
void getscore()
{
cout<<" enter sports score\n";
cin>>score;
}

void showscore()
{
cout<<" sporets score  = "<<score<<"\n";
}
};
class result:public test, public sports
{
protected:

float total;

public:
void showresult()
{
total=0;
for(int i=0;i<5;i++)
{
total+=mark[i];
}
total+=score;
cout<<" total marks = "<<total<<"\n";
 if(total>=400)
{
cout<<" CONGRATS U PASSED \n";
}
else
{
cout<<" SORRY U FAILED\n";
}
}
};
int main()
{
result s;
s.getdetail();
s.getmark();
s.getscore();

s.showdetail();		// well done bro
s.showmark();
s.showscore();
s.showresult();


return 0;
}
