#include <bits/stdc++.h>
using namespace std;

int GCD(int a,int b);

int main()
{
    cout <<"Enter two number to find the GCD"<<endl;
    int a,b;
    cin >> a>>b;
    cout <<"GCD : "<<GCD(a,b)<<endl;
    return 0;
}

int GCD(int a,int b)
{
    int c = a%b;
    if (c==0) return b;
    a=b; b =c;
    GCD(a,b);
}
