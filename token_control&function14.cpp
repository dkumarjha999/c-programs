#include<iostream>
using namespace std;
void matrix();
int main()
{
matrix();
return 0;
}
void matrix()
{
int m,n=2;
cout<<" enter number of row  of matrix\n\n";
cin>>m;
int a[m][2];
cout<<" enter element of matrix having row and column = "<<m<<" , "<<n<<"\n\n";
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
 cin>>a[i][j];
}

cout<<" given element of matrix having row and column = "<<m<<" , "<<n<<"\n\n";
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
 { cout<<a[i][j]<<" ";}
cout<<"\n";
}
}
