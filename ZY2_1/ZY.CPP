#include <iostream.h>
void main()
{
	int x;
	cout<<"please input x:"<<endl;
	cin>>x;
	if(x<10)
		cout<<"x<10"<<endl;
	else
	{
		if(x<=99)
	        cout<<"10<=x<=99"<<endl;
	
		else
		{
			if(x<=999)
				cout<<"100<=x<=999"<<endl;
		
			else
			{
				if(x>=1000)
					cout<<"x>=1000"<<endl;
			}
		}
	}
}
	