#include<iostream>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number to check it is palindrome or not -";
    cin>>number;

    int check=number;
    int rem=0;
    int n;

    while(number>0){
        n=number%10;
        rem=rem*10+n;
        number=number/10;
        

    }

    if(rem==check){
        cout<<"The given number is Palindrome = "<<check;
    }
    else{
        cout<<"The given number is not Palindrome = "<<check;
    }

    return 0;

}