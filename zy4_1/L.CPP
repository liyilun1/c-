#include <iostream.h>
void main()
{
	int i,t;
		t=0;
    for(i=2000;i<=3000;i++)
	{
		if(i%400==0||i%4==0&&i%100!=0)
		{
			cout<<" "<<i;
			t++;
		}
		if(t%10==0)
			cout<<endl;
		
	}
}



