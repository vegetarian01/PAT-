//��������ΪNΪ������1000λ����������
//�������ַ���s������N��
//�����ַ����е�ÿ���ַ���
//��ÿ�����ֳ��ֵĴ�������������a�У�
//a[i]��ʾ����i���ֵĴ�����
//�������a���±�0-9������a[i]��Ϊ0��������ɡ�
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
