//1003.所以一句话总结字符串的要求：
//只能有一个P一个T，中间末尾和开头可以随便插入A。
//但是必须满足开头的A的个数 * 中间的A的个数 = 结尾的A的个数，
//而且P和T之间不能没有A～


//map<char,int> :char为字符串中字母，int为其对应的个数
//定义map<char,int> m.
 
#include<iostream>
#include<map>
using namespace std;

int main()
{
	string s;   //给的字符串
	//int m[];     //给出各个字母出现的个数的数组 
	int n;    //测试的组数
	int p=0,t=0;
	cin >>n;
	for(int i=0;i<n;i++)
	{
		cin >>s;
		map<char,int> m;  //map m 是很多对映射，映射是char对应int类型的
		for(int j=0;j<s.size();j++)
		{
			m[s[j]]++;    //计算每个字母的个数 s[j]所对应的映射加一 
			if(s[j]=='P')
				p=j;     //p的位置 
			if(s[j]=='T')
				t=j;	  //T的位置 
		}
		if(m['P']==1&&m['A']!=0&&m['T']==1&&m.size()==3&&t-p!=1&&p*(t-p-1)==s.length()-t-1)
		//m.size()即查询map中键值对的数量;
		//t-p!=1表示P和T之间不是没有A
		//后面表示开头的A的个数 * 中间的A的个数 = 结尾的A的个数 
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0; 
}
