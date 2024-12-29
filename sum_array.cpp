#include <iostream>
using namespace std;

int main()
{
    int arr[]={2,4,6,8};
    int sum=0;

    for (int i = 0; i < 4; i++)
    {
       sum=sum+arr[i];
    }

    cout<<"The sum of all the elements of an array  is "<<sum;
    
    return 0;
}