#include <bits/stdc++.h>

using namespace std;

int main()

{
    double arr[100][2] , arr1[500], distance_X = 0, distance_Y = 0, X = 0, Y =0,total = 0, distance = 0;

    int n = 0,l = 0,m = 0,o = 0,n1 = 0,i = 0,j = 0,p = 0,q = 0,k = 0,t=1,e =1;

    cout << "How many number of point you want to enter" << endl ;
    cin >>n;
    n1 = (n*(n-1))/2;

    for ( i=0; i<n ;i++)
    {
        cout << "Enter the X and Y of " <<e++<<"st point"<<endl;
        for (j=0;j<2;j++)
        {
            cin >> arr[i][j];
        }
    }
    for (p=0; p<n-1; p++)
    {
        for (q=p+1; q<n;q++)
        {
            distance_X = arr[q][l] - arr[p][l];
            distance_Y = arr[q][m] - arr[p][m];

             X = distance_X * distance_X;
             Y = distance_Y * distance_Y;
             total = X + Y;
             distance = sqrt(total);
             arr1[o] = distance;
             o++;
        }
    }
    double max = arr1[0];
    for (t;t<n1;t++)
    {
        if (arr1[t] > max)
        {
            max = arr1[t];
        }
    }
    cout <<"The maximum distance is: "<<max <<endl;
    return 0;
}
