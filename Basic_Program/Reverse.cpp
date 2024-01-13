#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number to check it's Reverse number - ";
    cin>>number;

    int rev=0;
    while(number>0){
        int n=number%10;
        rev=rev*10+n;
        number=number/10;
    }

    cout<<"Reverse Number is = "<<" "<<rev;
    return 0;
}