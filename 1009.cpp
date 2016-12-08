#include "1009.h"
//Ëµ·´»°£¬hello world >> world hello
int main1009()
{
	string str;
	int i = 0;
	vector <string> vecInput;
	while(cin>>str)
	{
		vecInput.push_back(str);
		if(getchar() == '\n')
		{
			break;
		}
		
	}
	int size = vecInput.size();
	for(i = 0;i < size /2;++i)
	{
		str = vecInput[size - i - 1];
		vecInput[size - i - 1] = vecInput[i];
		vecInput[i] = str;
	}
	for (i = 0; i < size; ++i)
	{
		cout<<vecInput[i];
		if(i<size-1)
			cout<<" ";
	}

	return 0;
}