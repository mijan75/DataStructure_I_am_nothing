#include <bits/stdc++.h>

using namespace std;

int factorial(int a)
{
    if (a==0) return 1;
    else return a*factorial(a-1);
}

int main()

{
    int n;
    cout <<"Enter a number"<<endl;
    cin >>n;
    cout << "The factorial of " << n <<"is : " <<factorial(n)<<endl;
    return 0;
}
