#include <iostream>
using namespace std;


int main()
{   
   int mul(int b,int c);
    int a,b;
    cout<<"Enter your number ";
    cin>>a;
    cout<<"Enter second number ";
    cin>>b;
    
    cout<<mul(a,b);
    return 0;
}


int mul(int b,int c){
      return b*c;
}