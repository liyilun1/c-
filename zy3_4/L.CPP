#include <iostream.h>
void main()
{
   int a,b,i,t;
    cout<<"输入整数a,b:"<<endl;
	cin>>a>>b;
	t=a/b;
	i=a%b;
	if(a%b==0)
		cout<<"算数:"<<"a/b="<<"商:"<<(float)t<<endl;
	else
		cout<<"算数:"<<"a/b="<<"整数商:"<<t<<"余数:"<<i<<endl;
}

