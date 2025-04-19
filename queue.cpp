#include<iostream>
using namespace std;


int size=5;

int q[5];
int front=-1;
int rare=-1;



bool isEmpty(){

	if(front==-1 && rare==-1){

		return true;

	}
	else{
		return false;
	}



}
bool isFull(){
	if(rare==size-1){

		return true;
	}
	else{
		return false;
	}


}

bool enqueue(int element){
	if(isFull()==true){
		cout<<"maximum size reached!"<<endl;
	}
	else if(isEmpty()==true){
		front=0;
		rare=0;
		q[rare]=element;

		cout<<element<<" enqued!"<<endl;
	}
	else{
		rare++;
		q[rare]=element;

		cout<<element<<" enqued again!"<<endl;

	}

}

bool dequeue(){
	if(isEmpty()==true){

		cout<<"dequeue failed!"<<endl;

	}
	else if(front==rare){

		front=-1;
		rare=-1;




	}
	else{



		front++;

	}

}
int frontelement(){
	if(isEmpty()==true){
		cout<<"front element not available"<<endl;

	}
	else{

		cout<<q[front]<<" is the front element!"<<endl;
	}

}

void show(){
	if(isEmpty()==true){
		cout<<"Nothing to show!"<<endl;
	}
	else{
		cout<<"the elements are: ";
		for(int i=front;i<=rare;i++){
			cout<<q[i]<<" ";
		}
		cout<<endl;

	}

}


int main(){

	enqueue(9);
	enqueue(3);
	enqueue(4);
	show();
	dequeue();
	dequeue();
	dequeue();
	dequeue();

frontelement();
	show();
	enqueue(2);
	enqueue(4);
	enqueue(1);
	enqueue(5);
	enqueue(7);
	enqueue(9);
	show();
	dequeue();
	show();
	dequeue();
	dequeue();
	show();
	frontelement();
	dequeue();
	enqueue(6);
	dequeue();
	dequeue();
	dequeue();
	show();

}
