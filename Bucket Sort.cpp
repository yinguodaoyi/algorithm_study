#include<iostream>
using namespace std;
int n;
const int N=100010;
const int X=10010;//数列最大值限制 
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
    	b[tmp]++;
	}
    for(int i=1;i<X;i++)
    {
    	for(int j=1;j<=b[i];j++)
    	{
    		cout<<i<<" ";
		}
	}
	cout<<endl;
}
