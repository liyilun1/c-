#include <iostream.h>
void main()
{
	double r,k,s,l;
	cout<<"输入r和整数K:";
	cin>>r>>k;
	l=2*3.14*r;
	s=3.14*r*r;
	switch((int)k)
	{
	case 1:cout<<"面积:"<<s;break;
	case 2:cout<<"周长:"<<l;break;
	case 3:cout<<"面积和周长:"<<s<<l;break;
}
}
	


