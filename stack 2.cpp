#include<iostream>
using namespace std;

class MyStack{
	private:
	int stack[10],top,maxsize;


	public:

		MyStack(int size=10){


			maxsize=size;
			top=0;


		}

		bool isEmpty(){
			if(top==0){

				return true;
			}
			else
			{
				return false;
			}


		}

		bool isFull(){
			if(top==maxsize){

				return true;
			}
			else{

				return false;
			}

		}

		bool push(int element){

			if(isFull()==true){

				cout<<"push failed"<<endl;
			}

			else{

				stack[top]=element;
				top++;
				cout<<"element: "<<element<<" pushed!"<<endl;

			}

		}

		bool pop(){
			if(isEmpty()==true){

				cout<<"pop failed!"<<endl;
			}
			else{

				cout<<stack[top-1]<<" popped"<<endl;
				top--;

			}


		}
		bool topElement(){

			if(isEmpty()==true){


		cout<<"No elements availabe"<<endl;
	}
	else{

		cout<<stack[top-1]<<" is the top element"<<endl;

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

			cout<<stack[i]<<endl;
    }
    cout<<endl;

	cout<<"Here ";
	topElement();

	cout<<endl;

}







};


int main(){
	MyStack stc;

	stc.push(21);
	stc.push(8);
	stc.push(4);
	stc.push(1);
	stc.push(9);
	stc.push(8);
	stc.push(6);
	stc.push(11);
	stc.push(2);
	stc.push(32);
	stc.push(4);

	stc.show();
	stc.push(3);

	cout<<endl;

	stc.pop();


	cout<<endl;

	stc.show();




}
