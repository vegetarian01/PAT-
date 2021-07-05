
//分析：按照题目所给的方法
//找到相等的字符后判断即可，
//如果输出的时间不足2位数要在前面添0，
//即用%02d输出～

#include<bits/stdc++.h>

using namespace std;

int main()
{
	string a,b,c,d;
	cin >> a >> b >>c >> d;
	int pos,i=0,j=0;
	char m[2];
	//周几 
	while(i<a.length()&&i<b.length()){
		if(a[i]==b[i]&&(a[i]>='A'&&a[i]<='G')){
			m[0]=a[i];
			break;
		}
		i++;
	}
	i=i+1;
	//几点的时 
	while(i<a.length()&&i<b.length())
	{
		if(a[i]==b[i]&&((a[i]>='A'&&a[i]<='N')||isdigit(a[i]))){
			//isdigit判断数字 
		 	m[1]=a[i];
			break;
		}
		i++;
	}
	//几点的分 
	while(j<c.length()&&j<d.length())
	{
		if(c[j]==d[j]&&isalpha(c[j])){  
		//isalpha判断是否只有字符串组成 
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
