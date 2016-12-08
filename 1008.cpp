#include "1008.h"
//不用其它数组，实现数组的循环右移
//需要注意的点：vector 要是从大往小里取元素，第一个下标应该是 vector.size -1
int main1008()
{
	int n = 5;
	int m = 2;
	int i = 0,j = 0;
	int temp = 0;
	int input = 0;
	vector<int> vecInput;

	cin>>n;
	cin>>m;
	int size = n;
	while(n--)
	{
		cin>>input;
		vecInput.push_back(input);

	}
	for(j = 0; j<m; ++j)
	{
		for(i = size -1; i> 0;--i)
		{
			temp = vecInput[i];
			vecInput[i] = vecInput[i - 1];
			vecInput[i - 1] = temp;
		}
	}
	for(i = 0; i < size;++i)
	{
		cout<<vecInput[i];
		if(i < size - 1)
			cout<<" ";
	}
	return 0;
}