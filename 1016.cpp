//��������A��B������string a��b�У�
//��DA��DB������da��db�У�
//��ΪAΪ�ַ��������Զ�������ÿһλa[i]��
//��da == (a[i]- '0')ʱ���ʾda��a[i]��ȣ�
//��pa = pa * 10 + da��
//Bͬ����db == (b[i]- '0')ʱ���ʾdb��b[i]��ȣ�
//��pb = pb * 10 + db��������pa+pb��ֵ��

#include<bits/stdc++.h>

using namespace std;

int main()
{
	string a,b;
	int pa=0,pb=0,da,db;
	cin >> a >> da >> b >> db ;
	for(int i=0;i<a.length();i++)
	{
		if((a[i]-'0')==da)
			pa=pa*10+da;
	}
	for(int j=0;j<b.length();j++)
	{
		if((b[j]-'0')==db)
			pb=pb*10+db;
	}
	cout << pa+pb;
	return 0;
}

