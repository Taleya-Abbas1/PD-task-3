#include<iostream>
using namespace std;

main(){
int imposter_count ;
cout<<"Enter the value of imposter_count"<<endl;
cin>>imposter_count;
cout<<"imposter_count is :" << imposter_count<<endl;
int player_count ;
cout<<"Enter the value of player_count" <<endl;
cin>>player_count ;
cout<<"player_count is :" <<player_count <<endl ;
int chance_of_imposter ;
chance_of_imposter =100 * ( imposter_count / player_count ) ;
cout<<"chance_of_imposter is :" <<chance_of_imposter<<"%" ;

}