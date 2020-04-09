#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

const char* filename="binary";

int main()
{
float ht[4]={123.4,121.34,122.123,132.2};
ofstream out;
out.open(filename);
out.write((char*) &ht, sizeof(ht));
out.close();

for(int i=0;i<4;i++)
{ht[i]=0;}  //  for clearing memory

ifstream in;
in.open(filename);
in.read((char*) &ht, sizeof(ht));

for(int i=0;i<4;i++)
{
cout.setf(ios::showpoint);
cout<<setw(10)<<setprecision(7)<<ht[i]<<"\t";    // setprecision thik se rkhna hai and isko use krne k liye iomanip header usue krna hai
}

in.close();
cout<<"\n\n";
return 0;
}
