//��������һ����������ע��㣬
//���������NֵΪ6174��ʱ��
//����Ҫ��������Ĳ��裬
//ֱ����ֵΪ6174�ſ��ԡ�
//������do while��䣬
//������ʲôֵ����Ҫִ��һ��while��䣬
//ֱ��������ֵ��0000��6174��

//s.insert(0, 4 �C s.length(), ��0��);
//����������4λ��ʱ��ǰ�油0��

#include<bits/stdc++.h>

using namespace std;

bool cmp(char a,char b)
{
	return a>b;
}//��->С 

//stoi()�з��루string�����͵Ĳ�����
//���԰�stringת����int����
//C++�е� to_string()ϵ�к���
//����ֵת�����ַ�����ʽ��
int main()
{
	string a;
	cin >> a ;
	a.insert(0,4-a.length(),'0');  
	//����4λ���ĸ���0
	do{
		string p=a,q=a;
		sort(p.begin(),p.end(),cmp);
		//�Ӵ�С
		sort(q.begin(),q.end());
		//��С����
		int result=stoi(p)-stoi(q);
		//stringת����int��
		a=to_string(result); //ת����string
		a.insert(0,4-a.length(),'0');
		cout << p << " - " << q << " = " << a << endl;
	}while(a!="6174"&&a!="0000"); 
	return 0;
}
