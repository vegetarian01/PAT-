//��������t = A + B��
//��ÿһ��t % d�Ľ��������int���͵�����s�У�
//Ȼ��t / d��ֱ�� t ���� 0Ϊֹ��
//��ʱs�б����
//���� t �� D ������ÿһλ�Ľ���ĵ���
//��������s���鼴�ɡ�

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int a,b,d;
	cin >> a >> b >> d;
	int c=a+b;
	if(c==0){
		cout << 0;
		return 0;
	}
	int s[100];
	int i=0;
	while(c!=0)
	{
		s[i++]=c%d;
		c=c/d;
	}
	for(int j=i-1;j>=0;j--)
		cout << s[j];
	return 0;
}
