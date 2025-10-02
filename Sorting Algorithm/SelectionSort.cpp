#include <iostream>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}

int selectioSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int samllestIndx=i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[samllestIndx])
            {
               samllestIndx=j;
            }
        }
        swap(arr[i],arr[samllestIndx]);
    }
    printArray(arr, n);
}

int main()
{
    int arr[] = {5, 3, 4, 1, 2};
    int n = sizeof(arr) / sizeof(int);

    selectioSort(arr, n);

    return 0;
}