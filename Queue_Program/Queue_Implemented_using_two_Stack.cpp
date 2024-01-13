#include<iostream>
#include<stack>
using namespace std;

class Queue{
    public:
        stack <int> s1,s2;


        void push(int data){
            s1.push(data);
        }

        void pop(){
            while(!s1.empty()){
                s2.push(s1.opt());


            }
            int ans = s2.pop();
            while(!s2.empty()){
                s1.push(s2.pop());
            }
            cout<<"Top Element ="<<" "<<ans;
        }


};

int main(){

    Queue q1;
    q1.push(56);
    q1.push(45);
    q1.push(33);

    q1.pop();


}