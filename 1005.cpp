#include "1005.h"
//not test 1213
int main1005()
{
	int n = 0;
	int i = 0;
	int temp = 0;

	set<int> notKey;
	set<int> key;
	vector<int> inputVec;

	cin>>n;
	int cnt = n;
	int k = 0;

	while (n--)
	{
		cin>>k;
		inputVec.push_back(k);
	}
	for(i = 0; i < cnt- 1;++i)
	{
		while(inputVec[i] != 1)
		{
			if(inputVec[i] == 0)
				break;
			if(inputVec[i] % 2 == 0)
			{
				inputVec[i] /= 2;
				temp = inputVec[i];
			}
			else
			{
				inputVec[i] = 3 * inputVec[i] +1;
				inputVec[i] /= 2;
				temp = inputVec[i];
			}
			notKey.insert(temp);//not sure there the insert fuction maybe produce problem
		}
		if(notKey.count(inputVec[i+1]))
			continue;
		else
			key.insert(inputVec[i + 1]);
	}
	set<int>:: iterator iter_key = key.end();
	while(iter_key != key.begin())
	{
		cout<<*(--iter_key);
		if(iter_key != key.begin())
			cout<<" ";
	}

	return 0;
}