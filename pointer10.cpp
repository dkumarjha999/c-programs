#include<iostream>
#include<string.h>

using namespace std;

class person
{
char name[30];
float age;

public:
person( char *s, float a)
{
strcpy(name,s);
age=a;
}

person greater(person x)
{
if(x.age>=age)
{return x;}
else 
{return *this;}

}

void display(void)
{
cout<<" name is : "<<name<<"\n";
cout<<" age :"<<age<<"\n\n";
}

};

int main()
{
person p1("john",40),
p2("raman", 35.5),
p3("hari",39);

person p4=p1.greater(p2);
cout<<"elder person \n";
p4.display();

person p5=p2.greater(p3);
cout<<" elder person \n";
p5.display();

return 0;
}

