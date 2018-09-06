
#include<iostream>
using namespace std;

#define MAX 1000

class Stack
{
	int top;
public:
	int a[MAX]; 

	Stack()
	{ 
	    top = -1; 
	    
	}
	

bool push(int x)
{
	if (top >= (MAX-1))
	{
		cout << "Stack Overflow";
		return false;
	}
	else
	{
		a[++top] = x;
		return true;
	}
}

int pop()
{
	if (top < 0)
	{
		cout << "Stack Underflow";
		return 0;
	}
	else
	{
		int x = a[top--];
		return x;
	}
}

void display()
{
	for(int i=0;i<=top;i++)
	{cout<<a[i]<<endl;
	}	
}

};
int main()
{
	 Stack s;
	s.push(10);
	s.push(20);
	s.push(30);

	cout << s.pop() << " Popped from stack\n";
s.display();
	return 0;
}

