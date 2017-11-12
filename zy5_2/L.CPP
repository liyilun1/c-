#include "iostream.h"
int max(int n)
{
	float s;
	int t,x;
	x=1;
	for(t=2;t>n;t++)
	{
		s=1;
		x=x+t;
    s=s+1/(x);
	}
	return(s);
}
void main()
{
	int n;
	double c;
	cin>>n;
	c=max(n);
	cout<<"S="<<c<<endl;
}
	
