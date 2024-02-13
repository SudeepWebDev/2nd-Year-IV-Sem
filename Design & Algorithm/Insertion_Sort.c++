#include <iostream>
using namespace std;

void insertionSort(int arr[], int p)
{
    int comp;
    for (int i = 0; i < p; i++)
    {
        int key = arr[i];
        int j = i - 1;
        comp++;
        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }

    cout << "Number of comparisons: " << comp;
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
int main()
{
    int arr[] = {2, 31, 25, 98, 3, 56, 24};
    cout << "Original Array: ";
    int size = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, size);
    insertionSort(arr, size);
    cout << "\nSorted Array: ";
    printArr(arr, size);
    return 0;
}
