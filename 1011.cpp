#include "1011.h"
//1207created
int main1011()
{
	int n = 0;
	int i = 0;
	cin>>n;
	vector <ABC> vecInput;
	int a,b,c;
	ABC abc;
	while (n--)
	{
		cin>>a>>b>>c;
		abc.setA(a);
		abc.setB(b);
		abc.setC(c);
		vecInput.push_back(abc);
	}
	//vector<ABC> ::iterator iter = vecInput.begin();
	for(i = 0; i < vecInput.size();++i)
	{
		if(vecInput[i].compare(vecInput[i].getA()+vecInput[i].getB(),vecInput[i].getC()))
			cout<<"Case #"<<i+1<<": "<<"true"<<endl;
		else 
			cout<<"Case #"<<i+1<<": "<<"false"<<endl;
	}
	
	//while (iter != vecInput.end())

	return 0;
}
//2147483647
//2147483646
//-2147483648
//-2147483647

long long int ABC:: getA()
{
	return a;
}
long long int ABC:: getB()
{
	return b;
}
long long int ABC:: getC()
{
	return c;
}
void ABC:: setA(long long int A)
{
	a = A;
}
void ABC:: setB(long long int B)
{
	b = B;
}
void ABC:: setC(long long int C)
{
	c = C;
}

bool ABC:: compare(long long int a,long long int b)
{
	return (a > b);
}