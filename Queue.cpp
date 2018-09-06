#include<iostream>
using namespace std;
#define SIZE 10
class Queue
{
public:
int a[SIZE];
int rear;
int front;
Queue()
{
	rear=front=-1;
}
void enqueue(int x)
{
	if(front==-1)
	{
		front ++;
	}
	if (rear == SIZE-1)
	{
		cout<<"Queue is full";
	}
	else
	{
		a[++rear]=x;
	}
}
int dequeue(){
	return a[++front];
}
void display()
{
	for(int i=front;i<=rear;i++)
	{cout<<a[i]<<endl;
	}
}
};

int main()
{
	int value;
	Queue q;
	q.enqueue(100);
	q.enqueue(50);
	q.enqueue(1000);
	q.enqueue(1001);
	q.enqueue(1002);
	 value=q.dequeue();
	cout<<value<<"is removed from queue";
	q.enqueue(1003);
	value=q.dequeue();
	cout<<value<<"is removed from queue";
	q.display();
	return 0;
}

