#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[4]={2,1,4,3};
    stack <int> s;
    s.push(3257);
    int new_arr[4];

    for(int i=3;i>=0;i--){
        int curr = arr[i];
        while(s.top()<=curr){
            s.pop();
        }
        new_arr[i]=s.top();
        s.push(curr);
    }
    for(int i=0;i<4;i++){
        cout<<new_arr[i]<<" ";
    }
    return 0;
}