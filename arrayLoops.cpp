#include <iostream>
using namespace std;



int main()
{
    int n =10;
    int arr[n];
    int i;
    int j;
    int minimum;
    int other;
    int tmp;

    for (i=0;i<n;i++)
    {
        cout << "Enter an integer: ";
        cin >> arr[i];
    }

    for (i=0;i<n-1;i++)
    {
        other=i;
        minimum=arr[i];
        for (j=i+1;j<n;j++)
            if (arr[j]<minimum)
            {
                minimum=arr[j];
                other=j;
            }

        tmp=arr[other];
        arr[other]=arr[i];
        arr[i]=tmp;
    }
    cout << "The sorted array:" << endl;
    for (i=0;i<n;i++)
    cout << "a[" << i << "] = " << arr[i] << endl;
   
   
   
    return 0;
}