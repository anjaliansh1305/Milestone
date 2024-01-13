#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an Array :-"<<" ";
    cin>>n;
    int min=INT_MAX;
    int max=INT_MIN;
    int arr[n];

    cout<<"Enter the elements of an Array :-"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Printing the all elements of an Array:-";
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;

    // Minimum Element of an Array
    for(int k=0;k<n;k++){
        if(arr[k]<min){
            min=arr[k];
        }
    }

    //Maximum Element of an Array
    for(int l=0;l<n;l++){
        if(arr[l]>max){
            max=arr[l];
        }
    }
    cout<<"Minimum Element of an Array :-"<<" "<<min<<endl;
    cout<<"Maximum Element of an Array :-"<<" "<<max;
    return 0;
}