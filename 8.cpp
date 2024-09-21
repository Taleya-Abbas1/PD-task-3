#include<iostream>
using namespace std;

main(){
float vp ;
float fp ;
int tv ;
int tf ;
int net;
cout<<"Enter vegetable price per kg" <<endl ;
cin>>vp ;
cout<<"vegetables price is =" <<vp ;
cout<<"Enter fruits price per kg " <<endl ;
cin>>fp ;
cout<<"fruits price is = " <<fp ;
cout<<"Enter total kilograms of vegetables " <<endl;
cin>>tv ;
cout<<"total kg of vegetables is = " <<tv ;
cout<<"Enter total kilograms of fruits" <<endl ;
cin>>tf ;
cout<<"total kg of fruits is =" <<tf ;
net = vp*tv + fp*tf ;
cout<<"total earning is = " <<net<<"Rs." ;
}