/*

    Binary Search - searching on sorted arrays

*/

#include <iostream>
using namespace std;

int mainArray[10] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};

int binarySearch(int arr[], int x)
{
    int left = 0;
    int right = 11;
    while(left <= right)
    {
        int mid = left + (right - left)/2;

        if(arr[mid] == x)
        {
            return mid;
        }
        else if(arr[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid -1;
        }
    }
}

void sortArray()
{
    int len = (sizeof(mainArray)/sizeof(mainArray[0]))-1;
    int temp;
    for(int i=0; i<len; i++)
    {
        for(int j=i+1; j<len; j++)
        {
            if(mainArray[i] > mainArray[j])
            {
                temp = mainArray[i];
                mainArray[i] = mainArray[j];
                mainArray[j] = temp;
            }
        }
    }
}

int main()
{
//    cout << "Enter elements of the array: \n";
//    for(int i=0; i<10; i++)
//    {
//        cin >> mainArray[i];
//    }
//    sortArray();
//
//    cout << endl;

    cout << endl << "Sorted array: ";
    for(int i=0; i<10; i++)
    {
        cout << mainArray[i] << " ";
    }

    cout << endl << "Search for the element: ";
    int element;
    cin >> element;
    cout << "Element " << element << " is stored in index " << binarySearch(mainArray, element) << endl;
}
