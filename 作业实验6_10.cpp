#include <iostream.h>
void main()
{
	double h;
	float fun(double h);
	cout<<"Please input h:";
	cin>>h;
	cout<<"h="<<fun(h)<<endl;
}
float fun(double h)
{
	long m,n,i;
	m=h*1000;
	n=m%10;
	if(n>=5) i=1;
	else i=0;
	m=m/10+i;
	h=(double)m/100;
	return h;
}