#include<iostream>
#include<string>
using namespace std;

int main()
{
string s1("man"),s2,s3;
s2.assign(s1);
s3=s1;   // s3=man

string s4("wo"+s1);  // to add wo in man

s2+="age";  // s2=man + age
s3.append("ager");  // man+ ager   appen is used to add after the string
s1[0]='v';  // m replaced by v in man

cout<<" strings are\n s1="<<s1<<"\n s2 = "<<s2<<" \ns3 = "<<s3<<"\n s4 = "<<s4<<"\n\n";

return 0;
}
