
//������������Ŀ�����ķ���
//�ҵ���ȵ��ַ����жϼ��ɣ�
//��������ʱ�䲻��2λ��Ҫ��ǰ����0��
//����%02d�����

#include<bits/stdc++.h>

using namespace std;

int main()
{
	string a,b,c,d;
	cin >> a >> b >>c >> d;
	int pos,i=0,j=0;
	char m[2];
	//�ܼ� 
	while(i<a.length()&&i<b.length()){
		if(a[i]==b[i]&&(a[i]>='A'&&a[i]<='G')){
			m[0]=a[i];
			break;
		}
		i++;
	}
	i=i+1;
	//�����ʱ 
	while(i<a.length()&&i<b.length())
	{
		if(a[i]==b[i]&&((a[i]>='A'&&a[i]<='N')||isdigit(a[i]))){
			//isdigit�ж����� 
		 	m[1]=a[i];
			break;
		}
		i++;
	}
	//����ķ� 
	while(j<c.length()&&j<d.length())
	{
		if(c[j]==d[j]&&isalpha(c[j])){  
		//isalpha�ж��Ƿ�ֻ���ַ������ 
			pos=j;
			break;
		}
		j++;
	}
	
	string week[7]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	int n=isdigit(m[1])?m[1]-'0':m[1]-'A'+10;
	cout << week[m[0]-'A']; 
	printf("%02d:%02d", n,pos);
	return 0;
}
