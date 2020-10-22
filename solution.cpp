#include<iostream>
using namespace std;
main(){

    int n;
    cin>>n;
    int i;
    for(i=1; i<n; i++){
        if(i%3==0){
            cout<<"Fizz\n";
        }
        else if(i%5==0){
            cout<<"Buzz\n";
        }
        else if(i%3==0 && i%5==0){
            cout<<"FizzBuzz\n";
        }
        else
            cout<<i;
            cout<<"\n";
    }
}
