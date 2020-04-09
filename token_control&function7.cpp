#include<iostream>
using namespace std;
struct player
{
int r,in,no;
char n[20];
};
int main()
{
int n;
cout<<" enetr number of players\n\n";
cin>>n;
player p[n];
for(int i=1;i<=n;i++)
{
cout<<" enter detail of "<<i<<" player\n\n";
cout<<" enter name,runs ,inning,times notout\n\n";
cin>>p[i].n>>p[i].r>>p[i].in>>p[i].no;
}
for(int i=1;i<=n;i++)
{
cout<<" given detail of "<<i<<" player\n\n";
cout<<" given name,runs ,inning,times notout\n\n";
cout<<p[i].n<<"  "<<p[i].r<<"  "<<p[i].in<<"  "<<p[i].no<<"\n\n";
}
return 0;
}
