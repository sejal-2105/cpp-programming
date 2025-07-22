#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;

    if(a>=0){
        cout<<"Number is positive";{
                    if(a%2==0){
                        cout<<"Number is even";
                    }
                    else{
                        cout<<"Number is odd";
                    }
        }
    }
    else{
        cout<<"number is negative";
        cout<<"enter a valid positive number to test even-odd";
    }
}