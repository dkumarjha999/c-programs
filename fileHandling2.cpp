#include<iostream>
#include<fstream>

using namespace std;


int main()
{

ofstream fout;

fout.open("country");
fout<<"USA"<<"\n"<<"UK"<<"\n"<<"india"<<"\n";
fout.close();

fout.open("capital");
fout<<"washington"<<"\n"<<" london"<<"\n"<<"delhi"<<"\n";
fout.close();

// readind the file
const int p=100;
char line[p];

ifstream fin;
fin.open("country");
cout<<" name of countries \n";
while(fin)
{
fin.getline(line,p);
cout<<line<<"\n";
}
fin.close();

fin.open("capital");
cout<<" name of capitals \n";
while(fin)
{
fin.getline(line,p);
cout<<line<<"\n";
}
fin.close();

return 0;
}
