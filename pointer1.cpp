#include<iostream>
using namespace std;
int main()
{
int a,*ptr1,**ptr2;   // general var a, ptr1 as pointer of first order  and ptr2 as pointer of second order 

ptr1=&a;
ptr2=&ptr1;    // assigning adresses
cout<<" adress of a = "<<ptr1<<"\n";

cout<<" adress of ptr1 = "<<ptr2<<"\n\n\n";

cout<<" after incrementing adress value \n";
ptr1+=2;
ptr2+=2;    // incrementing pointer adresses

cout<<" adress of a, adress of ptr1 = "<<ptr1<<"\t"<<ptr2<<"\n\n";

return 0;
}
