#include "1006.h"
//not test 1213
int main1006()
{
	int n = 0;
	int i = 0;

	cin>>n;
	int a[3];
	a[0] = n /100;
	n -= a[0]* 100;
	a[1] = n /10;
	a[2] =n - a[1]*10;

	for(i = 0;i<a[0];++i)
		cout<<"B";
	for(i = 0;i<a[1];++i)
		cout<<"S";
	for(i = 1;i<a[2];++i)
		cout<<i;
	cout<<a[2]<<endl;
	return 0;
}