#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int singleElement(vector<int> nums){
    int result = 0;
    for(int num : nums){
        result ^= num;
    }
    return result;

}
int main()
{
    vector<int> nums = {1, 3, 2, 2, 1};
    cout << singleElement(nums);
}