#include<iostream>
using namespace std;
class Bubble
{
	public:
		int a[10],n;
		void get()
		{
			cin>>n;
			for(int i=0;i<=(n-1);i++)
			{
				cin>>a[i];
			}
		}
void swap()
{
	for(int pass=1;pass<=n-1;pass++)
	{
		for(int j=0;j<=n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp;
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void display()
{
	for(int i=0;i<=n;i++)
			{
				cout<<a[i];
			}
	
	}	
	
};
int main()
{
	Bubble b;
	b.get();
	b.swap();
	b.display();
	return 0;
	}
