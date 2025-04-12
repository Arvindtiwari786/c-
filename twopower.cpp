#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter number";
    cin>>number;
    if((number&(number-1))==0){
        cout<<"yes";
    }else{
        cout<<"no";
    }
}