//�������ж������ĺ���isprime����д��
//��������a��i��2������a��
//���a�ܹ�������һ��i������
//˵��i����������return false��
//����˵��a������return true��
//������������N��forѭ���е�i��5��N
//Ϊʲô��5��ʼ��1��3�����ǣ�2��4������ 
//�����ж�i-2��i�Ƿ���������
//���������������ͳ�Ƹ�����cnt++��������cnt���ɡ�

#include<bits/stdc++.h>

using namespace std;

bool sushu(int a)    //�����ж� 
{
	for(int i=2;i*i<=a;i++)
		if(a%i==0)
			return false;
	return true;
}

int main()
{
	int N,n=0;
	cin >> N;
	for(int i=5;i<=N;i++)
		if(sushu(i-2)&&sushu(i))  //�ж�i-2��i 
			n++;
	cout << n;
	return 0;
}
