#include <iostream>
using namespace std;

int arr(int arr[],int size){
    int count=1;
    for ( int i = 0; i < size; i++)
    {
        arr[i]=10*count;
        count++;
        cout<<10<<"*"<<i+1<<"="<<arr[i]<<endl;
    }

   
    
}
int main()
{
    int array[]={};
    int size=10;

    arr(array,size);

    return 0;
}