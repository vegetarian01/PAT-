//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main()
//{
//	int n;
//	string a,b;
//	cin >> n;
//	int cnt1=0,cnt2=0,cntc=0,cntb=0,cntC=0,cntB=0;
//	for(int i=0;i<n;i++)
//	{
//		cin >> a[i] >> b[i] ;
//		if(a[i]=='C'&&b[i]=='J'){
//			cnt1++;
//			cntc++;
//		}
//		else if(a[i]=='J'&&b[i]=='B'){
//			cnt1++;
//			cntb++;
//		}
//		else if(a[i]=='B'&&b[i]=='C'){
//			cnt1++;
//		}
//		else if(a[i]=='C'&&b[i]=='B'){
//			cntB++;
//		}
//		else if(a[i]=='J'&&b[i]=='C'){
//			cntC++;
//		}
//		else if(a[i]==b[i]){
//			cnt2++;
//		}
//	}
//	cout << cnt1 << " " << cnt2 << " " << n-cnt1-cnt2 << endl;
//	cout << n-cnt1-cnt2 << " " << cnt2 << " " << cnt1 << endl;
//	if(cntc>cntb&&cntc>(cnt1-cntc-cntb))
//		cout << 'C';
//	else if(cntb>=cntc&&cntb>=(cnt1-cntc-cntb))
//		cout << 'B';
//	else 
//		cout << 'J' ;
//	
//	if(cntC>cntB&&cntC>(n-cnt1-cnt2-cntC-cntB))
//		cout << " " << 'C';
//	else if(cntB>=cntC&&cntB>=(n-cnt1-cnt2-cntC-cntB))
//		cout << " " << 'B';
//	else 
//		cout << 'J' ;
//	return 0;
//}


//分析：jiawin、yiwin分别表示甲乙赢的次数，
//s和t分别表示每一次甲乙给出的手势，
//maxjia和maxyi分别表示
//甲乙获胜次数最多的手势所对应的下标
//（012分别表示BCJ），
//枚举每一次甲乙手势的胜负结果
//并累加到jiawin和yiwin中，
//最后根据题目要求输出结果～

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int jiawin = 0, yiwin = 0;
    int jia[3] = {0}, yi[3] = {0};
    for (int i = 0; i < n; i++) {
        char s, t;
        cin >> s >> t;
        if (s == 'B' && t == 'C') {
            jiawin++;
            jia[0]++;
        } else if (s == 'B' && t == 'J') {
            yiwin++;
            yi[2]++;
        } else if (s == 'C' && t == 'B') {
            yiwin++;
            yi[0]++;
        } else if (s == 'C' && t == 'J') {
            jiawin++;
            jia[1]++;
        } else if (s == 'J' && t == 'B') {
            jiawin++;
            jia[2]++;
        } else if (s == 'J' && t == 'C') {
            yiwin++;
            yi[1]++;
        }
    }
    cout << jiawin << " " << n - jiawin - yiwin << " " << yiwin << endl << yiwin << " " << n - jiawin - yiwin << " " << jiawin << endl;
    int maxjia = jia[0] >= jia[1] ? 0 : 1;
    maxjia = jia[maxjia] >= jia[2] ? maxjia : 2;
    int maxyi = yi[0] >= yi[1] ? 0 : 1;
    maxyi = yi[maxyi] >= yi[2] ? maxyi : 2;
    char str[4] = {"BCJ"};
    cout << str[maxjia] << " " << str[maxyi];
    return 0;
}
