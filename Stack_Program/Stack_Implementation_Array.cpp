#include<iostream>
using namespace std;

class Stack{
    public:
        int *arr;
        int size;
        int top;

        Stack(int size){
            this -> size = size;
            top = -1;
            arr = new int(size);
        }

        void push(int element){
            
            if(size - top >1){
                top++;
                arr[top]=element;
            }
            else{
                cout<<"Stack is Overflow"<<endl;
            }
        }

        void pop(){
            if(top>=0){
                top--;
            }
            else{
                cout<<"Stack is underflow"<<endl;
            }
        }

        int peek(){
            if(top>=0){
                return arr[top];
            }
            else{
                cout<<"Stack is EMPTY"<<endl;
                return -1;
            }
        }

        bool isEmpty(){
            if(top==-1){
                return true;
            }
            else{
                return false;
            }
        }


};

int main(){
    Stack st(5);
    st.push(6);
    st.push(2);
    st.push(7);

    cout<<"The top element of the STACK = "<<" "<<st.peek()<<endl;
    cout<<"Stack is Empty or Not ="<<" "<<st.isEmpty()<<endl;

    st.pop();
    cout<<"The top element of the STACK = "<<" "<<st.peek();

}