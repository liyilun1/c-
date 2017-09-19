#include <iostream.h>
void main()
{
	int x;
	cout<<"please input x:";
	cin>>x;
	if(x>100)
	switch(x/100)
	{
	case 10:cout<<x<<":x>=1000";break;
	case 9:
	case 8:
	case 7:
	case 6:
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:cout<<x<<":100=<x<=999";break;
	}
	else
		switch(x/10)
		{
    case 10:
	case 9:
	case 8:
	case 7:
	case 6:
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:cout<<x<<":10=<x<=99";break;
	default:cout<<x<<":x<10";
	}
	}


