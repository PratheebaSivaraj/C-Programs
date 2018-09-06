#include<iostream>
#include<string.h>
using namespace std;
class IString
{
	public:
        char string[20];
	IString()
	{
		gets(string);
		strrev(string);
		cout<<"reversed string:  "<<string<<"\n";
		
	}
	
	void operator == (IString str)
	{
		if((strlen(string))==(strlen(str.string)))
		{
		for(int i=1;i<(strlen(string));i=i+2)
		{
				if((string[i])!=(str.string[i]))
				cout<<"\n not same";
			}
			cout<<"\n same";
		}
	
	else
	{
		cout<<"\n string are not same";
	}
}
	
};
int main()
{
	IString n1,n2;
	n1==n2;
	return 0;
}
