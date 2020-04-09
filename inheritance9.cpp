#include<iostream>
using namespace std;

class stud
{

protected:
int no;
char name[30];
public:					// herarical inheritance so we have used virtual because one base class is used for derive
				// two other class which combined to form a final class so in final class two copy of base class we be sent
			// to over come that error we have inherited base class using virtual so that only one copy of base class will be sent
void getdetail()
{
cout<<" enter student name and roll number\n";
cin>>name>>no;
}
void showdetail()
{
cout<<" student name and roll number = "<<name<<" , "<<no<<"\n";
}
};

class test:virtual public stud
{
protected:
float mark[5];
public:
void getmark()
{
cout<<" enter marks in 5 subj\n";
for(int i=0;i<5;i++)
{cin>>mark[i];}
}

void showmark()
{
cout<<" marks of student in 5 subj\n";
for(int i=0;i<5;i++)
{cout<<mark[i]<<"\n";}
}
};

class sport:virtual public stud
{
protected:
float score;
public:
void getscore()
{
cout<<" enter score\n";
cin>>score;
}

void showscore()
{
cout<<" score in sports = "<<score<<"\n";
}
};

class result:public test, public sport
{
public:
void showresult()
{
float total=0;
for(int i=0;i<5;i++)
{total+=mark[i];}
total+=score;

cout<<" total marks obtained = "<<total<<"\n";
if(total>=400)
{cout<<" CONGRATS YOU ARE PASS\n";}
else
{cout<<" SORRY YOUR ARE FAIL\n";}
}
};

int main()
{
result r;

r.getdetail();
r.getmark();
r.getscore();

r.showdetail();
r.showmark();
r.showscore();
r.showresult();

return 0;
}
