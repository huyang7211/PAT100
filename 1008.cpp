#include "1008.h"
//�����������飬ʵ�������ѭ������
//��Ҫע��ĵ㣺vector Ҫ�ǴӴ���С��ȡԪ�أ���һ���±�Ӧ���� vector.size -1
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