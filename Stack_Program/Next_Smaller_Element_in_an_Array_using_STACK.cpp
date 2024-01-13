#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an Array :-";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an Array :-"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Print the elements of an Array:-"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    stack <int> s;
    s.push(-1);

    int new_arr[n];

    for(int i=n-1;i>=0;i--){
        int curr = arr[i];

        while(s.top()>=curr){
            s.pop();
        }

        new_arr[i]=s.top();
        s.push(curr);
    }

    cout<<"Print the Next Smaller element of an Array :-"<<endl;
    for(int i=0;i<n;i++){
        cout<<new_arr[i]<<" ";
    
    }

    return 0;
    
}