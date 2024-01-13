#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> q;
    q.push(17);
    q.push(43);
    q.push(6);
    q.push(41);
    q.push(56);


    cout<<"Size of a queue ="<<" "<<q.size()<<endl;
    cout<<"Front Element of a Queue ="<<" "<<q.front()<<endl;
    

    q.pop();
    cout<<"Front Element of a Queue ="<<" "<<q.front()<<endl;
    cout<<"Size of a queue ="<<" "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Queue is EMPTY"<<endl;
    }
    else{
        cout<<"Queue is Not EMPTY"<<endl;
    }



}