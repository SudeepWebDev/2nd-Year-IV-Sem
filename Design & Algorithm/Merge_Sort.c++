#include <iostream>
using namespace std;

void merge(int arr[], int p, int q, int r)
{
    int comp;
    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[q + j + 1];
    int i = 0;
    int j = 0;
    int k = p;
    while (i < n1 && j < n2)
    {
        comp++;
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

    cout<<"Number of comparisons: "<< comp;
    
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2; 
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
void printArr(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "; 
    }
    
}
int main() {
    int arr[] = {2,31,25,98,3,56,24};
    cout<<"Original Array: ";
    int size = sizeof(arr)/sizeof(arr[0]);
    printArr(arr, size);
    mergeSort(arr,0,6); 
    cout<<"\nSorted Array: ";
    printArr(arr, size);
    return 0;

}
