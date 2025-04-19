#include<iostream>
using namespace std;

int n=5;
int stack1[5];
int top=0;

bool isEmpty(){
	if(top==0){
		return true;
	}
	else{

		return false;
	}



}

bool isFull(){
	if(top==n){

		return true;

	}
	else{

		return false;
	}


}
void push(int element){

	if(isFull()==true){

		cout<<"push failed!"<<endl;

	}
	else{
		stack1[top]=element;
		top++;
		cout<<"element: "<<element<<" pushed"<<endl;
	}

}

void pop(){
	if(isEmpty()==true){
		cout<<"popping failed!"<<endl;
	}
	else{

		cout<<stack1[top-1]<<" popped"<<endl;
		top--;
	}


}

void topElement(){
	if(isEmpty()==true){

		cout<<"No elements availabe"<<endl;
	}
	else{

		cout<<stack1[top-1]<<" is the top element"<<endl;;

	}


}

void show(){

	if(isEmpty() == true)
    {
        cout<<"Nothing to show"<<endl;
    }
    else
    {
    	cout<<"the values are:"<<endl;
        for(int i = top-1; i>= 0; i--)

			cout<<stack1[i]<<endl;
    }
    cout<<endl;

	cout<<"Here ";
	topElement();

	cout<<endl;

}





int main(){

	pop();
	push(6);
	push(7);

	show();

	push(2);
	push(4);
	push(3);
	push(8);

	show();

	pop();
	pop();
	pop();
	pop();
	pop();
	pop();

	show();

	push(4);
	push(1);
	push(3);
	push(4);
	push(9);

	show();



}
