#include <iostream>
using namespace std;

int main()
{
    int array1[10] = {1,2,3,4,5};
    int array2[10] = {-11,7,8,9};
    int array3[10];
    int i=0, j=0, k=0;

    while(i<5 && j<4)
    {
        if (array1[i]>array2[j])
        {
            array3[k] = array2[j];
            k++; j++;
        }
        else
        {
            array3[k] = array1[i];
            k++; i++;
        }
    }

    if(j>4)
    {
        while(i<5)
        {
            array3[k] = array1[i];
            k++; i++;
        }
    }
    else
    {
        while(j<4)
        {
            array3[k] = array2[j];
            k++; j++;
        }

    }

    for (int l=0;l<9;l++)
    {
        cout<<array3[l]<<" ";
    }
    return 0;
}
