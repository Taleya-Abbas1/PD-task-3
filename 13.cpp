#include<iostream>
using namespace std ;

main(){
int num ;
int sum ;
cout<<"Enter a number " <<endl ;
cin>>num ;
sum = (num % 10) + (num /10)%10 + (num /100)%10 + (num /1000)%10 + (num /10000)%10 ;
cout<<"sum of 5 integers is : " <<sum ; 
}