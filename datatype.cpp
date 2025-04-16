#include <iostream>

#include <limits>
using namespace std;
int main(){
//int char float double

//size
cout<<sizeof(int)<<endl;
cout<<sizeof(float)<<endl;
cout<<sizeof(char)<<endl;
cout<<sizeof(double)<<endl;

//adress 
int a;
cout<<&a<<endl;

//limits
cout<<numeric_limits<int>::max()<<endl;
cout<<numeric_limits<int>::min();
cout<<numeric_limits<double>::max();
cout<<numeric_limits<double>::min();
cout<<static_cast<int>(numeric_limits<char>::max());
cout<<static_cast<int>(numeric_limits<char>::min());

//:: =>function specifier or scope resolution operator

}