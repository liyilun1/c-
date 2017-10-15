#include <iostream.h>
#include <math.h>
void main()
{
	double a,b,c,s,u;
	cout<<"请输入三个边长:"<<endl;
	cin>>a>>b>>c;
	if(a+b>c&&a+c>b==0)
		cout<<"三角形不存在";
	else
	if(b+c>a)
	{
			u=(a+b+c)/2;
 			s=sqrt(u*(u-a)*(u-b)*(u-c));
			cout<<"面积:"<<s;
	else
			cout<<"三角形不存在"<<endl;		
}
}

