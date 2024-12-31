#include <iostream>
using namespace std;

int array(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int arr[5]={1};

    // int arr[5];

    int size=5;

    array(arr,size);
    return 0;
}