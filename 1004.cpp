//分析：maxname和maxnum保存成绩最高的学生的姓名和学号，
//minname和minnum保存成绩最低的学生的姓名和学号，
//max和min保存当前的最高分和最低分，
//因为成绩区间为0-100，所以初始化时先令max = -1，min = 101。
//遍历所有数据，如果当前学生数据的分数比最大值大，那么更新max的值，
//并将他的姓名学号保存在maxname和maxnum中；
//如果当前学生数据的分数比最小值小，那么更新min的值，
//并将他的姓名学号保存在minname和minnum中。
//最后输出maxname、maxnum、minname和minnum～


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;  //测试组数
	int score;
	int max=-1,min=101;     //!!!!!!绝！！！！ 
	string maxname,maxnum,minname,minnum,name,num;
	cin >>n;
	for(int i=0;i<n;i++)
	{
		cin >> name >> num >> score;
		if(max<score)
		{
			max=score;
			maxname=name;
			maxnum=num;
		}
		if(min>score)
		{
			min=score;
			minname=name;
			minnum=num;
		}
	}
	cout << maxname << " " << maxnum << endl << minname << " " << minnum;
	return 0;
}
