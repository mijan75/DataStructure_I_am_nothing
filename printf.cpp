#include <bits/stdc++.h>

using namespace std;

void recurse(int i)
{
    if (i<5)
    {
        recurse(i+1);
        printf("%d ",i);
    }
}

int main()

{
    recurse(0);
    return 0;
}
