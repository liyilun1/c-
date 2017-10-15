#include <iostream.h>
void main()
{
	int a,b;
	cout<<"输入一个整数:"<<endl;
	cin>>a;
	if(a%3==0)
		b=1;
		else
		if(a%7==0)
			b=1;
			else
			b=0;
			if(b==1)
				cout<<a<<":YES";
			else
				cout<<a<<":NO";
}

