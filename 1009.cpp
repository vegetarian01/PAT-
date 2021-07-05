//分析：将输入的每个单词s都分别v.push(s)压入栈中，
//再输出栈顶v.top()，
//然后将栈顶元素弹出v.pop()，
//直到栈空为止～

#include<bits/stdc++.h>

using namespace std;

int main()
{
	stack<string> v;   //设置v为栈 
	string s;     //输入的字符串 
	while(cin >> s)    //输入 
	{
		v.push(s);    //push 压栈 
	}
	cout << v.top();   //输出栈顶 
	v.pop();          //弹出栈顶 
	while(!v.empty())   //非空 
	{
		cout << " " << v.top();   //输出栈顶 
		v.pop();
	}
	return 0;
}
