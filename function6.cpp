#include <iostream>
using namespace std;
int si(int p,int r,int t){
    return (p*r*t)/100;
}

int amount(int p,int res){
    return p+res;
}
int main()
{
    int p, r, t;
    cout<<"Enter the principle ";
    cin>>p;
    cout<<"Enter the rate ";
    cin>>r;
    cout<<"Enter the time ";
    cin>>t;
    
  
    int res=si(p,r,t);
    cout<<"The simple interest is : "<<res;
    cout<<endl;
    cout<<"The amount is : "<<amount(p,res);
    
    return 0;
}