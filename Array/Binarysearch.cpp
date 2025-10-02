#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = (st + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            st = mid + 1;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
            return mid;
    }
}

int main()
{
    int arr[] = {2, 4, 6, 7, 8, 23, 45, 67, 89, 99};
    int n = sizeof(arr) / sizeof(int);

    cout << "Position of element = " << binarySearch(arr, n, 67);
    return 0;
}