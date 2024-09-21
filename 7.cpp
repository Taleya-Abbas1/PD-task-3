#include<iostream>
using namespace std;

main(){
string movie ;
float atp ;
float ctp ;
int net ;
int ats ;
int cts ;
int cd ;
int ra ;
cout<<"Enter the movie name" <<endl;
cin>>movie ;
cout<<"movie is = " << movie <<endl;
cout<<"Enter the adult ticket price:" ;
cin>> atp ;
cout<<"adult ticket price is = " <<"$"<<atp<<endl ;
cout<<"Enter the child ticket price :"  ;
cin>> ctp ;
cout<<"child ticket price is = " <<"$"<<ctp <<endl; 
cout<<"Enter the number of adult ticket sold:"  ;
cin>> ats ;
cout<<"adult ticket sold is =" <<ats<<endl ;
cout<<"Enter the number of child ticket sold:"  ;
cin>> cts ;
cout<<"child ticket sold is =" <<cts<<endl ;
net = atp *ats  + ctp*cts ;
cd = net/10 ;
ra = net - cd ;
cout<<"total amount is = " <<"$"<<net<<endl ;
cout<<"charity denoted is =" <<"$"<<cd<<endl ;
cout<<"remaining amount is =" <<ra<<endl;

}