#include<iostream>
using namespace std;

const int MAX_SIZE = 5;

class Queue {
private:
    int q[MAX_SIZE];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        	if(front==-1 && rear==-1){

		return true;

	}
	else{
		return false;
	}
    }

    bool isFull() {
        	if(rear==MAX_SIZE-1){

		return true;
	}
	else{
		return false;
	}
    }

    void enqueue(int element) {
       	if(isFull()==true){
		cout<<"maximum size reached!"<<endl;
	}
	else if(isEmpty()==true){
		front=0;
		rear=0;
		q[rear]=element;

		cout<<element<<" enqued!"<<endl;
	}
	else{
		rear++;
		q[rear]=element;

		cout<<element<<" enqued again!"<<endl;

	}
}

    void dequeue() {
        	if(isEmpty()==true){

		cout<<"dequeue failed!"<<endl;

	}
	else if(front==rear){

		front=-1;
		rear=-1;




	}
	else{



		front++;

	}
    }

    int frontElement() {
        if (isEmpty()==true) {
            cout << "Front element not available. Queue is empty!" << endl;

        }
        else{
        cout<<q[front]<<" is the front element!"<<endl;

		}

    }

    void display() {
       	if(isEmpty()==true){
		cout<<"Nothing to show!"<<endl;
	}
	else{
		cout<<"the elements are: ";
		for(int i=front;i<=rear;i++){
			cout<<q[i]<<" ";
		}
		cout<<endl;

	}
}

};

int main() {
    Queue q;

    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(9);
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.frontElement();
    q.display();

    q.enqueue(7);
    q.enqueue(2);
    q.enqueue(6);
    q.enqueue(3);
    q.enqueue(8);
    q.enqueue(4);
    q.display();
    q.dequeue();
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
    q.frontElement();
    q.dequeue();
    q.enqueue(9);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();

}



