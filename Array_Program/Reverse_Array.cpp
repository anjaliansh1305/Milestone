#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an Array:-";
    cin>>n;

    int arr[n];

    cout<<"Enter the Elements of an Array:-";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Printing the elements of an Array:-";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Code for Reverse the Array:-
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"Reversed Element of an Array:-"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}