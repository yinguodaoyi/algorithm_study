#include <iostream>
#include <string>
#include <algorithm>
#define maxn 520
using namespace std;
int a[maxn], b[maxn], c[maxn];
bool negative=false;
int main() {
    string A, B;
    cin >> A >> B;
    if(B.length()>A.length())
    {
    	negative=true;
    	swap(A,B);
	}
	else if(A.length()==B.length())
	{
		for(int i=0;i<A.length();i++)
		{
			if(B[i]>A[i])
			{
				negative=true;
				swap(A,B);
				break;
			}
			if(B[i]<A[i]) break;
		}
	}
    int len=A.length();
    for (int i = A.length() - 1, j = 1; i >= 0; i--, j++)
        a[j] = A[i] - '0';
    for (int i = B.length() - 1, j = 1; i >= 0; i--, j++)
        b[j] = B[i] - '0';
    for (int i = 1; i <= len; i++) {
        c[i]+=a[i]-b[i];
        while(c[i]<0)
        {
        	c[i+1]--;
        	c[i]+=10;
		}
    }
    while(c[len]==0 && len>=2)
        len--;
    if(negative) cout<<"-";
    for (int i = len; i >= 1; i--)
        cout << c[i];
}
