#include "1010.h"
//1207created
//һԪ����ʽ��
int main1010()
{
	vector<int> vecInput;
	vector<int> vecOutput;
	int n = 0;
	int i = 0;
	while(cin>>n)//��һ���жϣ����س�ʱ��������
	{
		vecInput.push_back(n);
		if(getchar() == '\n')
			break;
	}
	int size = vecInput.size();
	if(size == 2)
	{
		if(vecInput[1] == 0)//������Ϊf(x) = 0ʱ��������� modified by kangshn 1208
		{
			vecOutput.push_back(multi(vecInput[0],vecInput[1]));
			vecOutput.push_back(vecInput[1]);
		}
		else//������Ϊf(x) = nxʱ��������� modified by kangshn 1208
		{
			vecOutput.push_back(multi(vecInput[0],vecInput[1]));
			vecOutput.push_back(vecInput[1] - 1);
		}
		
	}
	else
	{
		for(i = 0;i < size - 2; i=i+2)//��������Ĳ�������������ʱ����Ч
		{
			vecOutput.push_back(multi(vecInput[i],vecInput[i+1]));
			vecOutput.push_back(vecInput[i+1] - 1);
		}
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