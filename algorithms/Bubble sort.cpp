#include<iostream>
using namespace std;
int n;
const int N = 100010;
int a[N];
int main(){
    cin>>n;
    for(int i = 1;i<=n;i ++)cin>>a[i];
    for(int i=n;i>=1;i--)
    {
        int _1=i;
        for(int _2=_1+1;_2<=n;_2++,_1++)
        {
            if(a[_1]>a[_2]) swap(a[_1],a[_2]);
        }
    }
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
}
