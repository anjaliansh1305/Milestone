#include<iostream>
using namespace std;

class Queue{

    int size;
    int *arr;
    int qfront;
    int rear;

    public:
        Queue(){
            size = 100001;
            arr = new int(size);
            qfront = 0;
            rear = 0;
        }

        void enqueue(int element){
            if(rear==size){
                cout<<"Queue is Full"<<endl;
            }
            else{
                arr[rear]=element;
                rear++;
            }
        }
        void dequeue(){
            if(qfront==rear){
                cout<<"Queue is Empty"<<endl;
            }
            else{
                arr[qfront]=-1;
                qfront++;

            }
        }

        void isEmpty(){
            if(qfront==rear){
                cout<<"Queue is Empty"<<endl;
            }
            else{
                cout<<"Queue is Not Empty"<<endl;
            }
        }

        void front(){
            if(qfront==rear){
                cout<<"Queue is Empty"<<endl;
            }
            else{
                cout<<"Front Element of the Queue ="<<" "<<arr[qfront]<<endl;
            }
        }
};

int main(){
    Queue q;
    q.enqueue(67);
    q.enqueue(54);
    q.enqueue(34);
    q.enqueue(5);

    q.front();
    q.dequeue();
    q.front();
    q.isEmpty();
}