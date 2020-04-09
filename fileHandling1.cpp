#include<iostream>
#include<fstream>

using namespace std;

int main()
{
ofstream out("item");			// creating ofstream object out of name item for taking input 
cout<<" enter item name \n";
char name[50];
cin>>name;
cout<<" enter item cost \n";
float cst;
cin>>cst;

out<<name<<"\n";    	//   here /n ids must needed otherwise name and cost will  be murged
out<<cst<<"\n";

out.close();

ifstream in("item");		// creatng ifstream object in for gettting output 

in>>name;
in>>cst;
cout<<" \n item details = \n";
cout<<" item name = "<<name<<"\n\n";
cout<<" item cost = "<<cst<<"\n\n";
in.close();

return 0;
}
