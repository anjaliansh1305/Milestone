#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int>&inputStack,int count,int size){
    if(count==size/2){
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();

    //Recursive call
    solve(inputStack,count+1,size);
    inputStack.push(num);
    
    
}

void deleteMiddle(stack<int>&inputStack, int N){
    int count = 0;
    solve(inputStack,count,N);

}

int main(){
    stack<int>inputStack;
    int N;
    inputStack.push(5);
    inputStack.push(4);
    inputStack.push(1);
    deleteMiddle(inputStack,N);
    
    
}