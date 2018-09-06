#include<iostream>
using namespace std;
class Insertion
{
public:
		int a[10],n,temp,j;
		void get()
		{
			cin>>n;
		
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
	}
		void swap()
		{
	for(int incr=3;incr>=1;incr--)	
	{
		
	
	for(int i=0;i<=n-1;i+incr)
	{
		temp=a[i];
		j=i;
		while((j>=0)&&(a[j-incr]>=temp))
		{
			a[j-incr]=a[j];
			j=j-incr;
		}
		a[j+incr]=temp;
		
	}
}
  
for(int i=0;i<n;i++)
			{
				cout<<a[i];
			}

}

		};
	
	int main()
	{
		Insertion t;
		t.get();
		t.swap();
		
		return 0;
	}
