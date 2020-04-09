#include<iostream>
using namespace std;
class fd
{
long int pr;
int y;
float r;
float amt;
public:
fd(){}
fd(long int pr,int yr,float rt=.12);
fd(long int pr,int yr,int rt);
void show(void);
};


fd::fd(long int p,int yr,float rt)
{
pr=p;y=yr;r=rt;					// checked  okk grt well done !!!!!
amt=pr;
for(int i=0;i<y;i++)
amt=amt*(1.0+r);
}				//THIS IS EXAMPLE OF DYANMIC INITIALISATION OF OBJECT BC PROGRAM HAS USED OVERLOADED CONSTRUCTOR 
			// AND PARAMETER VALUE TO THESE CONSTRUCTOR ARE PROVIDED AT RUN TIME  SO PROVID EINPUTS IN GIVEN FORM ONLY AS FUNC CALLED  


fd::fd(long int p,int yr,int rt)
{
pr=p;y=yr;r=rt;
amt=pr;
for(int i=0;i<y;i++)
amt=amt*(1.0+float(r/100));
}

void fd::show(void)
{
cout<<"\n principle = "<<pr<<"\n amt = "<<amt<<"\n\n";
}

int main()
{

fd fd1,fd2,fd3;

long int principle;
int year , rate;
float rat;

cout<<" enter principle , time period, interest rate(in percentage)\n";
cin>>principle>>year>>rate;

fd1=fd(principle,year,rate);

cout<<" enter principle , time period, interest rate(in decimal form) \n";
cin>>principle>>year>>rat;

fd2=fd(principle,year,rat);

cout<<" enter principle , time period \n";
cin>>principle>>year;

fd3=fd(principle,year);

cout<<" \n Deposit 1 ";
fd1.show();

cout<<" \n Deposit 2 ";
fd2.show();

cout<<" \n Deposit 3 ";
fd3.show();

return 0;

}
