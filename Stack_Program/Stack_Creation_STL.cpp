#include<iostream>
#include<stack>
using namespace std;

int main(){

    //Creation of STACK using STL
    stack <int> s;

    s.push(5);
    s.push(4);
    s.push(2);
    s.push(9);
    s.push(11);

    cout<<"Size of the STACK ="<<" "<<s.size()<<endl;
    cout<<"Top Element of the STACK ="<<" "<<s.top()<<endl;

    s.pop();
    s.pop();
    cout<<"After using pop function :-"<<endl;
    cout<<"Size of the STACK ="<<" "<<s.size()<<endl;
    cout<<"Top Element of the STACK="<<" "<<s.top()<<endl;
    cout<<"STACK is empty or not ="<<" "<<s.empty()<<endl;

    return 0;
}