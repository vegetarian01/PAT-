//������maxname��maxnum����ɼ���ߵ�ѧ����������ѧ�ţ�
//minname��minnum����ɼ���͵�ѧ����������ѧ�ţ�
//max��min���浱ǰ����߷ֺ���ͷ֣�
//��Ϊ�ɼ�����Ϊ0-100�����Գ�ʼ��ʱ����max = -1��min = 101��
//�����������ݣ������ǰѧ�����ݵķ��������ֵ����ô����max��ֵ��
//������������ѧ�ű�����maxname��maxnum�У�
//�����ǰѧ�����ݵķ�������СֵС����ô����min��ֵ��
//������������ѧ�ű�����minname��minnum�С�
//������maxname��maxnum��minname��minnum��


#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;  //��������
	int score;
	int max=-1,min=101;     //!!!!!!���������� 
	string maxname,maxnum,minname,minnum,name,num;
	cin >>n;
	for(int i=0;i<n;i++)
	{
		cin >> name >> num >> score;
		if(max<score)
		{
			max=score;
			maxname=name;
			maxnum=num;
		}
		if(min>score)
		{
			min=score;
			minname=name;
			minnum=num;
		}
	}
	cout << maxname << " " << maxnum << endl << minname << " " << minnum;
	return 0;
}
