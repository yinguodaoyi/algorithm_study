#include<iostream>
using namespace std;
int n;
const int N=110;
const int X=1010;//数列最大值限制 
int b[X]; 
int tmp;
int main(){
    for(int i=1;i<X;i++)
    {
    	b[i]=0;
	}
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	cin>>tmp;
    	b[tmp]=1;
	}
	int tmp=0;
    for(int i=1;i<1010;i++)
    {
		if(b[i]!=0) tmp++;
	}
	cout<<tmp<<endl;
    for(int i=1;i<1010;i++)
    {
		if(b[i]!=0) cout<<i<<" ";
	}
}
//The problem is from : https://www.luogu.com.cn/problem/P1059
