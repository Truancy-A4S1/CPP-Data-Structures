/*

Insertion Sort

*/
#include <iostream>
using namespace std;

int main()
{
    const int SZ = 5;
    int arr[SZ] = {3,5,2,1,6};
    int key, i, j;
    for(i=1; i<SZ; i++)
    {
        key = arr[i];
        j   = i-1;

        while(j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }

    for(i=0; i<SZ; i++)
    {
        cout << arr[i] << " ";
    }
}
