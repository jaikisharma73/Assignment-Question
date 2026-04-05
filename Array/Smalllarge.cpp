#include <iostream>
#include <climits> // for INT32_MAX and INT32_MIN

using namespace std;

int main()
{
    int arr[] = {23, 3, 5, 9, 6};
    int size = 5;
    int smallest = INT32_MAX; // Use INT32_MAX for a larger range +infinitive
    int largest = INT32_MIN;  // Use INT32_MIN for a larger range -infinitive
    int smallestIndex = -1;   // To store the index of the smallest value
    int largestIndex = -1;    // To store the index of the largest value

    for (int i = 0; i < size; i++)
    {
        // If we find a new smallest element, update smallest and its index
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            smallestIndex = i; // Store the index of the smallest value
        }

        // If we find a new largest element, update largest and its index
        if (arr[i] > largest)
        {
            largest = arr[i];
            largestIndex = i; // Store the index of the largest value
        }
    }

    // Print the largest value and its index
    cout << "Largest = " << largest << " at index " << largestIndex << endl;
    // Print the smallest value and its index
    cout << "Smallest = " << smallest << " at index " << smallestIndex;

    return 0;
}
