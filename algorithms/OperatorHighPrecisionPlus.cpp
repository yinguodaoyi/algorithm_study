#include <iostream>
#include <string>
#include <algorithm>
#define maxn 520
using namespace std;
int a[maxn], b[maxn], c[maxn];
string operator+(string A,string B)
{
	string C;
    int len = max(A.length(), B.length());
    for (int i = A.length() - 1, j = 1; i >= 0; i--, j++)
        a[j] = A[i] - '0';
    for (int i = B.length() - 1, j = 1; i >= 0; i--, j++)
        b[j] = B[i] - '0';
    for (int i = 1; i <= len; i++) {
        c[i] += a[i] + b[i];
        c[i + 1] = c[i] / 10;
        c[i] %= 10;
    }
    if (c[len + 1])
        len++;
    for(int i=1;i<=len;i++) C+=" ";
    for (int i=len,j=0;i>=1;i--,j++)
        C[j]=c[i]+'0';
    return C;
}
int main() {
	string A,B,C;
    cin >> A >> B;
    C=A+B;
//    cout<<C.length()<<"\n";
    cout<<C<<"\n";
}
