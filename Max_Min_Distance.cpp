#include <bits/stdc++.h>

using namespace std;

int main()

{
    int arr[100],n,i=0,j=0,key=0;
    cout <<"Enter the number of the element" <<endl;
    cin >> n;
    cout <<"Enter " <<n <<" element"<<endl;
    for (i;i<n;i++)
    {
        cin >>arr[i];
    }

    for (i=0;i<n;i++)
    {
        key = arr[i];
        j= i-1;
        while (j>-1 && arr[j] > key)
        {
            arr[j+1]  = arr[j];
            j--;
        }
        arr[j+1] = key;

    }
    cout <<"Minimum is : "<<arr[0] << endl;
    cout <<"Maximum is : "<<arr[n-1] <<endl;
    cout <<"The distance between minimum to maximum is : " <<abs(arr[n-1] -arr[0]) << endl;
    return 0;
}
