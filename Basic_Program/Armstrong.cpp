#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter the number to check it is Armstrong number or not -";
    cin>>number;

    int original=number;
    int sum=0;
    int n;

    while(number>0){
        n=number%10;
        sum = sum + n*n*n;
        number=number/10;
    }

    if(sum==original){
        cout<<"The given number is Armstrong number";
    }
    else{
        cout<<"The given number is not Armstrong number";
    }

    return 0;
}