#include "1010.h"
//1207created
//һԪ����ʽ��
int main1010()
{
	vector<int> vecInput;
	vector<int> vecOutput;
	int n = 0;
	int i = 0;
	while(cin>>n && getchar()!='\n')//��һ���жϣ����س�ʱ��������
	{
		vecInput.push_back(n);
	}
	int size = vecInput.size();

	for(i = 0;i < size-2; i=i+2)
	{
		vecOutput.push_back(multi(vecInput[i],vecInput[i+1]));
		vecOutput.push_back(vecInput[i+1] - 1);
	}
	for(i = 0;i<vecOutput.size();++i)
	{
		cout<<vecOutput[i];
		if(i <vecOutput.size() - 1)
			cout<<" ";
	}
	return 0;
}

int multi(int a,int b)
{
	return a * b;
}