#include<iostream>
#include<stack>
using namespace std;

class TwoStack{
    public:
        int size;
        int top1;
        int top2;
        int *arr;

        TwoStack(int size){
            this -> size = size;
            arr = new int(size);
            top1 = -1;
            top2 = size;

        }


        void push1(int element){
            if(top2 - top1 >1 ){
                top1++;
                arr[top1] = element;
                
            }
            else{
                cout<<"Stack is Overflow";
            }
        }

        void push2(int element){
            if(top2 - top1 >1){
                top2--;
                arr[top2]=element;
            }
            else{
                cout<<"Stack is Overflow";
            }
        }

        void pop1(){
            if(top1 >= 0){
                top1--;

            }
            else{
                cout<<"Stack is Underflow";
            }
        }

        void pop2(){
            if(top2 < size){
                top2++;
            }
            else{
                cout<<"Stack is Underflow";
            }
        }



};


int main(){
    TwoStack t1(5);
    t1.push1(4);
    t1.push2(3);
    t1.push1(41);
    t1.push1(1);
    t1.push2(8);

    return 0;

}