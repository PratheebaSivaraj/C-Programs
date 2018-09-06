#include<iostream>
using namespace std;
class Shape
{
	public:
		virtual int surfaceArea(int a)=0;
		
};
class D_2Geomentry:public Shape
{
public:
	int area;
int surfaceArea(int l,int b)
{
	area=l*b;
	return area;
}
int surfaceArea(int a)
{
 area=a*a;

return area;	
}	
};
class D_3Geomentry :public Shape
{
	public:
	int vol,area;
	int surfaceArea(int l,int b,int h)
{
	area=2 *((l*b)+(b*h)+(h*l));
	return area;
}
int surfaceArea(int a)
{
 area=6*a*a;

return area;	
}	
	int volume(int l,int b,int h)
	{
		vol=l*b*h;
		return vol;
	//int volume=l*b*h;
		
	}
	int volume(int a)
	{
		vol=a*a*a;
		return vol;
	//int volume=a*a*a;
		
	}
	};

int main()
{
	int result;
D_2Geomentry square,rectangle;
result=square.surfaceArea(10);
cout<<"area of square"<<result;
result=rectangle.surfaceArea(10,20);
cout<<"area of rectangle"<<result;

D_3Geomentry cube,cuboid;
result=cube.surfaceArea(5);
cout<<"surface  area of cube"<<result;
result=cuboid.surfaceArea(5,2,8);
cout<<"surface area of cuboid"<<result;



result=cube.volume(5);
cout<<"volume of cube"<<result;
result=cuboid.volume(5,2,8);
cout<<"volume of cuboid"<<result;


 	
return 0;
}
