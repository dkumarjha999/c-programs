#include<iostream>
using namespace std;
class matrix
{
int**p;
int d1,d2;						// do it again bro u didnt understood completely
public:
matrix(int x,int y);
void getelement(int i,int j,int val)
{p[i][j]=val;}
int &putelement(int i,int j)
{return p[i][j];}
};
matrix :: matrix(int x,int y)
{
d1=x;d2=y;
p=new int *[d1];
for(int i=0;i<d1;i++)
p[i]=new int[d2];
}
int main()
{
int m,n;
float value;
cout<<" enter number of row and column of matrix\n";
cin>>m>>n;

matrix A(m,n);

cout<<" enter element of matrix row by row\n";
for( int i=0;i<m;i++)
 {
for(int j=0;j<n;j++)
{
cin>>value;
A.getelement(i,j,value);
}
cout<<"\n";
}
cout<<A.putelement(1,1);
cout<<"\n\n";

return 0;
}
