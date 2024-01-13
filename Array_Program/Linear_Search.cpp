#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of an Array:-";
    cin>>n;

    int arr[n];
    cout<<"Enter the Elements of an Array :-";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Print all the Elements of an Array:-";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    int element;
    cout<<"Enter the element that you want to search in an Array:-";
    cin>>element;
    bool count = 0;

    for(int i=0;i<n;i++){
        if(element==arr[i]){
            count=1;
            break;
            
        }
        
        
    }
    if(count){
        cout<<"Element is found ";
    }
    else{
        cout<<"Element does not found";
    }
    
    return 0;
}