#include<iostream>
#include<string>

using namespace std;
int main()
{
string s1("abcde"),s2("123"),s3;

cout<<" string are \n s1="<<s1<<"\n s2 = "<<s2<<"\n\n";

   s1.insert(2,s2);

       s1.erase(2,2);

  //  s1.replace(2,s2);
 
cout<<s1.c_str()<<"\n\n";

return 0;

}

