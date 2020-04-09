#include<iostream>
#include<string>
using namespace std;

int main()
{
string s1,s4; 		// CREATING string obj without value assignment 


string s2("delhi");    // creating string obj s2 and giving value as ( "" )
string s3(" new ");

cout<<" string s2 = "<<s2<<"\n\n";

cout<<" string s3 = "<<s3<<"\n\n";

s1=(s3+s2);   		// adding content of two string and assigning to other obj.

cout<<" string s1 = "<<s1<<"\n\n";


cout<<" enter a string s1 \n";
getline(cin,s1);    // ye white space ke sathth bhi string input kr leta hai without any termination

cout<<"now  string s1 = "<<s1<<"\n\n";


cout<<" enter a string s4 \n";
cin>>s4;      // jaise hi white space milega string terminate krr jata hai

cout<<" string s4 = "<<s4<<"\n\n";



cout<<" enter a string s1 \n";
getline(cin,s1);     // agr upr wale string ko input krte time white space hota hai to next string ko autamatically value assign
				// ho jata hai after white space why???
cout<<"now  string s1 = "<<s1<<"\n\n";


return 0;


}
