#include <iostream>
using namespace std;

int input(){
    int age;
    char g;
   cout<<"Enter your age : ";
   cin>>age;
   cout<<"Enter m for male and f for female : ";
   cin>>g;
}

int vote(){
    int age;
    char g;
    if(age>=18){
        if (g=='m')
        {
            cout<<"You are eligible for voting";
        }
         else{
        cout<<"You are not eligible for voting";
    }
    }

      else{
        cout<<"You are not eligible for voting";
    }    

}
int main()
{
    input();
    vote();
    return 0;
}