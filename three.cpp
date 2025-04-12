# include <iostream>
using namespace std;
int main()
{
    int a,b,c;//side of tringle
    cout<<"enter a value\t";
    cin>>a;
    cout<<"enter b value\t";
    cin>>b;
    cout<<"enter c value\t";
    cin>>c;
    if(a==b==c){
        cout<<"==> this is a Equilateral triangle";
     }
      else if(a==b!=c || a!=b==c){
            cout<<"==> this is a Isosceles triangle";
        }
        else{
            cout<<"==> this is a Scalene Triangle";
        }
    }
    

