/*

Selection sort

1. select first index (select) and compare it to other elements in the array
2. if an element[i] is greater than  element[select] swap their value (desc order)
3. select++ after comparing element[select] with element[size]

*/

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {3,5,3,2,1};
    int temp;
    int select = 0;

    cout << "Unsorted Array:           ";
    for(int i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }

    for(int i=1; i<5; i++)
    {
        if(arr[i] > arr[select])
        {
            temp = arr[select];
            arr[select] = arr[i];
            arr[i] = temp;
        }

        if(i==4)
        {
            select++;
        }
    }
    cout << endl << endl;

    cout << "Selection Sorted Array:   ";
    for(int i=0; i<5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
