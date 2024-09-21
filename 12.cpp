#include<iostream>
using namespace std ;

main(){
int sq_m ;
int w ;
int h ;
int walls ;
cout<<"  number of square meters you can print " <<endl ;
cin>>sq_m;
cout<<"Enter the width of single wall" <<endl ;
cin>>w ;
cout<<"Enter the height of single wall" <<endl ;
cin>>h ;
walls = (sq_m /(w*h)) ;
cout<<"Numbers of walls you can paint = " <<walls<<"meters" <<endl ;



}