#include <iostream.h>
#define M 4
#define N 4
void main()
{
	int i,k,sum;
	int a[M][N]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	sum=0;
	for(i=0;i<M;i++)
	{	for(k=0;k<N;k++)
	{	if(i<=k)
	             if(i<k)
				 a[i][K]=a[i][k]+1;
			else
				sum=sum+a[i][k];
		else
			a[i][k]=a[i][k]-1;
	}
	}
		for(i=0;i<M;i++)
		{
			for(k=0;k<N;k++)
				cout<<a[i][k]<<" ";
			cout<<endl;
		}
		cout<<sum<<endl;
}
			