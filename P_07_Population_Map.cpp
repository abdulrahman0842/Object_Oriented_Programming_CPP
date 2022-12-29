#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	map<string,int>first;
	//initializing
	first["Maharashtra"]= 123144223;
	first["Gujarat"]= 63872399 ;
	first["Rajasthan"]= 81032689 ;
	first["Bihar"]= 124799926;
	first["Kashmir"]= 13606320;
	first["Punjab"]= 30141373 ;
	first["UP"]= 30141373 ;
	//Alternative mathod
   map<string,int>::iterator it;
   cout<<"==========Population of states in India============\n\n";
   cout<<"\n Size of populationMap=\t"<<first.size()<<"\n"<<"\n";
   for(it=first.begin();it!=first.end();it++)
   {
   	cout<<"Name of State \t"<<it->first<<"=>"<<"Population\t"<<it->second<<'\n' ;
	   }
	   string c;
	   cout<<" \n Write State Name \t";
	   cin>>c;
	   cout<<" Population Of \t"<< c <<" Is \t"<<first[c];
	   return 0;	
}
