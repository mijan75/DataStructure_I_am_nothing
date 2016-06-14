#include <bits/stdc++.h>

using namespace std;

int digitSum(int a)
{
    if (a == 0) return 0;
    else return (a%10) + digitSum(a/10);
}

int main()

{
    int n;
    cout << "Enter a digit" <<endl;
    cin >> n;
    cout <<"The sum of the digit is : " << digitSum(n) <<endl;
    return 0;
}
