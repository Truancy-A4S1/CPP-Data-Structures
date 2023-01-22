/*

Bubble Sort: it brings the largest element at the end by swapping arr[j] with arr[j+1] if arr[j] > arr[j+1]
    j<size-i-1 will make the loop end 1 element earlier every iteration so that the nest largest element will be to the left of the largest element, and so on.

Unsorted arr:
{9,8,3,5,7}

1st iteration
{8,3,5,7,9}

2nd iteration
{3,5,7,8,9}






*/

#include <iostream>
using namespace std;



void sortArr(int ARR[], int sizee)
{
    int temp;
    for(int i=0; i<sizee; i++)
    {
        for(int j=0; j<sizee-i-1; j++)   // will
        {
            // ASCENDING ORDER
            if(ARR[j] > ARR[j+1]) //swap the elements if the next element is less than arr[j]
            {
                temp = ARR[j];
                ARR[j] = ARR[j+1];
                ARR[j+1] = temp;
            }
        }
    }
}

int main()
{
    cout << "BUBBLE SORT\nEnter array size: ";
    int n;
    cin >> n;

    int ARR[n];

    for(int i=0; i<n; i++)
    {
        cout << "ARR[" << i <<"] = ";
        cin >> ARR[i];
    }

    cout << "\nUnsorted array: ";
    for(int i=0; i<n; i++)
    {
        cout << ARR[i] << " ";
    }

    sortArr(ARR, n);   // function treat arrays that are passed as parameter as pointer

    cout << "\nSorted array: ";
    for(int i=0; i<n; i++)
    {
        cout << ARR[i] << " ";
    }
    cout << "\n";

}
