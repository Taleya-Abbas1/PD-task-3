#include<iostream>
using namespace std;

main(){
int age;
int moves ;
int av ;
cout<<"Enter person's age " <<endl ;
cin>> age;
cout<<"Enter number of times person have moved " <<endl ;
cin>> moves ;
av = (age/(moves + 1)) ;
cout<<"Average number of years for living in same house is =" <<av  ;
}