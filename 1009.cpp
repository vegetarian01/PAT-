//�������������ÿ������s���ֱ�v.push(s)ѹ��ջ�У�
//�����ջ��v.top()��
//Ȼ��ջ��Ԫ�ص���v.pop()��
//ֱ��ջ��Ϊֹ��

#include<bits/stdc++.h>

using namespace std;

int main()
{
	stack<string> v;   //����vΪջ 
	string s;     //������ַ��� 
	while(cin >> s)    //���� 
	{
		v.push(s);    //push ѹջ 
	}
	cout << v.top();   //���ջ�� 
	v.pop();          //����ջ�� 
	while(!v.empty())   //�ǿ� 
	{
		cout << " " << v.top();   //���ջ�� 
		v.pop();
	}
	return 0;
}
