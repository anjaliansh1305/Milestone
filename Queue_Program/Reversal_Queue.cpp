#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
    stack<int> s;
    queue<int> q;
    

    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    


    while(!q.empty()){
        int element = q.front();
        s.push(element);
        q.pop();
    }

    while(!s.empty()){
        int element1 = s.top();
        q.push(element1);
        s.pop();
    }

    cout<<"After Reversing the Queue, The all elements are -"<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}