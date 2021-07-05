//分析：有一个测试用例注意点，
//如果当输入N值为6174的时候，
//依旧要进行下面的步骤，
//直到差值为6174才可以～
//所以用do while语句，
//无论是什么值总是要执行一遍while语句，
//直到遇到差值是0000或6174～

//s.insert(0, 4 – s.length(), ‘0’);
//用来给不足4位的时候前面补0～

#include<bits/stdc++.h>

using namespace std;

bool cmp(char a,char b)
{
	return a>b;
}//大->小 

//stoi()中放入（string）类型的参数，
//可以把string转换成int类型
//C++中的 to_string()系列函数
//将数值转换成字符串形式。
int main()
{
	string a;
	cin >> a ;
	a.insert(0,4-a.length(),'0');  
	//不满4位数的给补0
	do{
		string p=a,q=a;
		sort(p.begin(),p.end(),cmp);
		//从大到小
		sort(q.begin(),q.end());
		//从小到大
		int result=stoi(p)-stoi(q);
		//string转换成int；
		a=to_string(result); //转换成string
		a.insert(0,4-a.length(),'0');
		cout << p << " - " << q << " = " << a << endl;
	}while(a!="6174"&&a!="0000"); 
	return 0;
}
