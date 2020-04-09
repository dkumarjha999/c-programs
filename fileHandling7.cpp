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
invent item;
fstream f;
f.open("stock.dat", ios::ate | ios::in | ios::out | ios::binary);
f.seekg(0,ios::beg);
cout<<" current content of stock\n";
while(f.read((char*)&item,sizeof(item)))
{item.show();}
f.clear();

cout<<" add an item\n";
item.getdata();
char ch;
cin.get(ch);
f.write((char*)&item,sizeof(item));
f.seekg(0);

cout<<" content of appended file\n";
while(f.read((char*)&item,sizeof(item)))
{item.show();}

// find number of object in the file

int last=f.tellg();

int n=last/sizeof(item);


cout<<" number of object = "<<n<<"\n\n";
cout<<" total bytes in file = "<<last<<"\n\n";

cout<<" enter object number to be updated \n";
int obj;
cin.get(ch);
int loc=(obj-1)*sizeof(item);
if(f.eof())
{f.clear();}
f.seekp(loc);

cout<<" enter new value of object\n";
item.getdata();
cin.get(ch);

f.write((char*)&item,sizeof(item))<<flush;


f.seekg(0);

cout<<" content of updated file\n";
while(f.read((char*)&item,sizeof(item)))
{
item.show();
}

f.close();

return 0;
}


