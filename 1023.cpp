//分析：将数字0、数字1、……数字9的个数分别保存在数组a[i]中，
//因为0不能做首位，
//所以首先将i从1到9输出第一个a[i]不为0的数字 i ，
//并将这个 i 保存在变量 t 中，
//接着输出a[0]个0，
//最后输出a[t]-1个 t
//（因为一个 t 已经被放在首位输出过一次了～） ，
//最后 i 从 t+1 到 9 输出 a[i] 个 i ～

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a[10],t;
	for(int i=0;i<10;i++)
	{
		cin >> a[i];
	}
	for(int i=1;i<10;i++)
	{
		if(a[i]!=0){
			cout << i; //输出第一个不为0 
			t=i;       //输出的保存到t中
			break; 
		}
	}
	for(int i=0;i<a[0];i++)
		cout << 0;
	for(int i=0;i<a[t]-1;i++)
		cout << t;
	for(int i=t+1;i<=9;i++)
		for(int j=0;j<a[i];j++)
			cout << i;
			
	return 0;
}
