#include<iostream>
using namespace std;

main(){  
int min ;
cout<<"Enter the value of num_of_min" <<endl;
cin>>min ;
int fps ;
cout<<"Enter the value of frames_per_sec" <<endl;
cin>>fps ;
int tf ;
tf = min  * 60*  fps ;
cout<<"total_num_of_frames is: "<<tf<<"sec" ;

}