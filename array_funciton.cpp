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

    int arr[]={10,20,30,40};

    array(arr,4);
    
    return 0;
}