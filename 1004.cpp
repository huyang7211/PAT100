#include "1004.h"

string Student::getName()
{
	return name;
}
string Student::getId()
{
	return id;
}
void Student::setName(string name)
{
	this->name =  name;
}
void Student::setId(string id)
{
	this->id =  id;
}
int main1004()
{
	map<int,Student> stuGrade;
	vector<int> vec;
	int n = 0;
	string name;
	string id;
	int grade = 0;
	int min = 0;
	int max = 100;
	int i_Max = 0;//存储最高成绩
	int i_Min = 0;//存储最低成绩
	int temp = 0;
	int i = 0 ;
	Student stu;
	//cout<<"input student's count:"<<endl;
	cin>>n;
	while (n--)
	{
		cin>>name;
		cin>>id;
		stu.setName(name);
		stu.setId(id);
		cin>>grade;
		vec.push_back(grade);
		stuGrade.insert(make_pair(grade,stu));
	}
	
	vector<int> ::iterator iter_vec = vec.begin();
	max = *(iter_vec);
	while (iter_vec != vec.end())
	{
		min = *iter_vec;
		if(min > max)
		{
			temp = max;
			max = min;
			min = temp;
		}
		++iter_vec;
	}
	i_Max = max;

	iter_vec = vec.begin();
	min = *(iter_vec);
	while (iter_vec != vec.end())
	{
		max = *iter_vec;
		if(min > max)
		{
			temp = max;
			max = min;
			min = temp;
		}
		++iter_vec;
	}
	i_Min = min;


	map<int, Student>:: iterator iter_max = stuGrade.begin();
	while (iter_max != stuGrade.end())
	{
		if(iter_max->first ==  i_Max)
			cout<<iter_max->second.getName()<<" "<<iter_max->second.getId()<<endl;
		++iter_max;
	}

	map<int,Student>:: iterator iter_min = stuGrade.begin();
	while (iter_min != stuGrade.end())
	{
		if(iter_min->first ==  i_Min)
			cout<<iter_min->second.getName()<<" "<<iter_min->second.getId()<<endl;
		++iter_min;
	}

	return 0;

}