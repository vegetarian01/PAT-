//分析：因为N为不超过1000位的正整数，
//所以用字符串s来接收N，
//遍历字符串中的每个字符，
//将每个数字出现的次数保存在数组a中，
//a[i]表示数字i出现的次数，
//最后将数组a的下标0-9中所有a[i]不为0的输出即可～
#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int a[10]={0};
	for(int i=0;i<s.length();i++)
		a[s[i]-'0']++;
	for(int i=0;i<10;i++){
		if(a[i]!=0)
			cout << i << ":" << a[i] << endl;
		}
		return 0;
}
