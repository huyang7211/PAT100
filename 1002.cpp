//��δ��������洢����
//n = 1234567890987654321123456789
//����Ӧ���Լ����һ���࣬���洢������
#include "1002.h"
int main1002()
{
	long long int n = 1234567890987654321;//�������
	//long long int n = 1234567890987654321123456789;//����Ͳ��ܴ洢��
	long sum = 0;
	long temp = 0;
	long count = 0;
	stack<int> storeDig;
	while(n != 0)
	{
		temp = n%10;
		n = n/10;
		sum+=temp;
	}
	cout<<sum<<endl;
	temp = 0;

	while(sum!= 0)
	{
		temp = sum%10;
		storeDig.push(temp);
		sum/=10;
		++count;
	}
	while (count--)
	{
		digitalToPinyin(storeDig.top());
		if(storeDig.size()>1)
			cout<<" ";
		storeDig.pop();
	}
	return 0;
}
void digitalToPinyin(long long n)
{
	switch (n)
	{
	case 0:
		cout<<"ling";
		break;
	case 1:
		cout<<"yi";
		break;
	case 2:
		cout<<"er";
		break;
	case 3:
		cout<<"san";
		break;
	case 4:
		cout<<"si";
		break;
	case 5:
		cout<<"wu";
		break;
	case 6:
		cout<<"liu";
		break;
	case 7:
		cout<<"qi";
		break;
	case 8:
		cout<<"ba";
		break;
	case 9:
		cout<<"jiu";
		break;

	default:
		break;
	}
}

/*
void Int::setInt(string str)
{
	this->str = str;
}
string Int::getInt()
{
	return str;
}
*/