#include<iostream>
using namespace std;

main(){
int num ;
int sum = 0 ;
cout<<"Enter the 4-digit number" <<endl;
cin>> num ;
cout<<"4-digit is =" <<num ;
sum = (num % 10) + ((num / 10) %10) + ((num/100) %10) + ((num/1000) %10) ; 
cout<<"Sum of invidual number is " <<sum ;
}