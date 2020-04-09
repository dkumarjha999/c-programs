#include<iostream>
#include<string>

using namespace std;

class product
{
int no;
string pn;
public:
product()
{ }

product(const int &num , const string &name)
{
   setproductnum(num);
     setproductname(name);
}

void setproductnumber(int n)
{
no=n;
}

void setproductname(const string str)
{
pn=str;
}
int getproductnum()
{return no;}

const string getproductname()
{return pn;}

product& operator=(product &source)
{
setproductnum(source.no);
string strtemp=source.pn;
setproductname(strtemp);
return *this;
}

void disp()
{
cout<<" productname: "<<getproductname()<<"\n";
cout<<" productnumber :"<<getproductnum()<<"\n";
}

};
int main()
{
product p1(1,5);
product p2(3,"date");
p3=p2=p1;
p3.disp();
p2.disp();			// phir se check kro ek baar

return 0;
}
