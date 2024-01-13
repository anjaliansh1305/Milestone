#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){

    stack<int> s;
    queue<int> q;
    int k;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout<<"Enter the value of K, till there you want to reverse the queue - ";
    cin>>k;

    for(int i=0;i<k;i++){
        int element = q.front();
        s.push(element);
        q.pop();
    }

    while(!s.empty()){
        int element1 = s.top();
        q.push(element1);
        s.pop();
    }

    // Fetch first n-k element from the queue push back

    int t = q.size() - k;
    for(int i=0;i<t;i++){
        int val = q.front();
        q.pop();
        q.push(val);
    }

    cout<<"Print the elements of the Queue = "<<endl;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}