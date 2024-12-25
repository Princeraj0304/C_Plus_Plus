#include <iostream>
using namespace std;

int main()
{
    int arr[5]={};
    
    string crr[5]={"First","second","Third","Fourth","Fifth"};
    for (int i = 0; i < 5; i++)
    {  

       cout<<"Enter the "<<crr[i]<<" element of the array ";
       cin>>arr[i];
    }

    
    
    for (int i = 0; i < 5; i++)
    {   
        if (i==0)
        {
            cout<<"The elements of an arrays are : ";
        }
        cout<<arr[i]<<" ";
    }
    
    return 0;
}