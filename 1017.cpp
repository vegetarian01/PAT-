//������ģ���ֶ������Ĺ��̣�
//ÿ���õ�һλȥ����B��
//����õ����̲���0�������
//�����*10+��һλ��ֱ��������Ϊ������

#include<bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	int b,temp=0;
	cin >> a >> b ;
	int len=a.length();
	int t=(a[0]-'0')/b;
	if((t!=0&&len>1)||len==1)
		cout << t;
	temp=(a[0]-'0')%b;
	for(int i=1;i<a.length();i++)
	{
		t=(temp*10+a[i]-'0')/b;
		cout << t ;
		temp=(temp*10+(a[i]-'0'))%b;
	}
	cout << " " << temp;

	return 0;
}
