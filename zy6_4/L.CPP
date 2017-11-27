#include <iostream.h>
#define K 20
void main()
{
	int i,j,x,a[K];
	a[0]=1;
	a[1]=1;
	for(i=2;i<K;i++)
	{
		j=i-1;
		x=i-2;
		a[i]=a[j]+a[x];
	}
for(i=0;i<K;i++)
cout<<a[i]<<" ";
cout<<endl;
}

