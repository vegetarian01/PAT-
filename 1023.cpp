//������������0������1����������9�ĸ����ֱ𱣴�������a[i]�У�
//��Ϊ0��������λ��
//�������Ƚ�i��1��9�����һ��a[i]��Ϊ0������ i ��
//������� i �����ڱ��� t �У�
//�������a[0]��0��
//������a[t]-1�� t
//����Ϊһ�� t �Ѿ���������λ�����һ���ˡ��� ��
//��� i �� t+1 �� 9 ��� a[i] �� i ��

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
			cout << i; //�����һ����Ϊ0 
			t=i;       //����ı��浽t��
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
