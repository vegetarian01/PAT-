//1003.����һ�仰�ܽ��ַ�����Ҫ��
//ֻ����һ��Pһ��T���м�ĩβ�Ϳ�ͷ����������A��
//���Ǳ������㿪ͷ��A�ĸ��� * �м��A�ĸ��� = ��β��A�ĸ�����
//����P��T֮�䲻��û��A��


//map<char,int> :charΪ�ַ�������ĸ��intΪ���Ӧ�ĸ���
//����map<char,int> m.
 
#include<iostream>
#include<map>
using namespace std;

int main()
{
	string s;   //�����ַ���
	//int m[];     //����������ĸ���ֵĸ��������� 
	int n;    //���Ե�����
	int p=0,t=0;
	cin >>n;
	for(int i=0;i<n;i++)
	{
		cin >>s;
		map<char,int> m;  //map m �Ǻܶ��ӳ�䣬ӳ����char��Ӧint���͵�
		for(int j=0;j<s.size();j++)
		{
			m[s[j]]++;    //����ÿ����ĸ�ĸ��� s[j]����Ӧ��ӳ���һ 
			if(s[j]=='P')
				p=j;     //p��λ�� 
			if(s[j]=='T')
				t=j;	  //T��λ�� 
		}
		if(m['P']==1&&m['A']!=0&&m['T']==1&&m.size()==3&&t-p!=1&&p*(t-p-1)==s.length()-t-1)
		//m.size()����ѯmap�м�ֵ�Ե�����;
		//t-p!=1��ʾP��T֮�䲻��û��A
		//�����ʾ��ͷ��A�ĸ��� * �м��A�ĸ��� = ��β��A�ĸ��� 
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0; 
}
