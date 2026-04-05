#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[] = {23, 3, 5, 9, 6};
    int size = 5;
    int smallest = INT_MAX; 
    int largest = INT_MIN;  
    int smallestIndex = -1;   
    int largestIndex = -1;    

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            smallestIndex = i;
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
            largestIndex = i;
        }
    }
    cout << "Largest = " << largest << " at index " << largestIndex << endl;
    cout << "Smallest = " << smallest << " at index " << smallestIndex;

    return 0;
}
