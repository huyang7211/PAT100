#include "1001.h"
//Access
int main1001()
{
	int n = 0;
	int count = 0;
	cin>>n;
	while(n!=1)
	{
		if(n == 0)
			break;
		if(n%2 == 0)
		{
			n = n/2;
			++count;
		}
		else 
		{
			n = 3*n + 1;
			n = n/2;
			++count;
		}
	}
	if(n != 0)
		cout<<count<<endl;
	return 0;

}