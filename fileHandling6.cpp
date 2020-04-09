#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

class invent
{
char name[50];
int code;
float cst;
public:
void getdata()
{
cout<<" enter name ,code and cost\n";
cin>>name>>code>>cst;
}
void show()
{
cout<<setiosflags(ios::left)<<"name= "<<name<<setiosflags(ios::right)<<setw(10)<<" code =  "<<code<<setprecision(5)<<" cost  = "<<cst<<"\n\n";
}
		// iosflag is setting the position 
};
int main()
{
invent item[3];
fstream f;
f.open("stock.dat", ios::in | ios::out);

cout<<"enter details for three items\n";
for(int i=0;i<3;i++)
{
item[i].getdata();
f.write((char*)&item[i],sizeof(item[i]));
}

f.seekg(0);

cout<<" outputs\n";
for(int i=0;i<3;i++)
{
f.read((char*)&item[i],sizeof(item[i]));
item[i].show();
}
f.close();
return 0;
}
