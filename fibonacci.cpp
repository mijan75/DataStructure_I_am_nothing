#include <bits/stdc++.h>

using namespace std;

int fibonacci(int a)
{
    if (a==0) return 0;
    else if (a==1) return 1;
    else return fibonacci(a-1) + fibonacci(a-2);
}

int main()

{
    int n;
    cout << "Enter a number" <<endl;
    cin >>n;
    cout << "The " <<n <<"th number of fibonacci series is:  kkkkkkk   " << fibonacci(n) <<endl;
    return 0;
}
