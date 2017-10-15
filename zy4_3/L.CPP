#include <iostream.h>
void main()
{
    int i,t,y;
	for(i=1;i<10;i++)
	{
		t=i*i;
		y=i*i*i;
		cout<<" "<<i<<" "<<t;
		if(y<100)
			cout<<" "<<y;
	}
}
