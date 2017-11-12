#include <iostream.h>
void main()
{
	int m,n;
	int fun(int m);
	cout<<"Please input m:";
	cin>>m;
	n=fun(m);
	cout<<"n="<<n<<endl;
}
int fun(int m)
{
	int i,j=0;
	for(i=2;i<=m;i++)
	{
		if((i%7==0)||(i%11==0))
		{
			cout<<i<<" ";
			j++;
		}
	}
	cout<<endl;
	return j;
}