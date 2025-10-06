#include<iostream>
#include<vector>
using namespace std;

int removeDuplicate(vector<int> &nums){
    int j = 1;
    for(int i = 1 ; i < nums.size() ; i++){
        if(nums[i] != nums[i-1]){
            nums[j] = nums[i];
            j++;
        }
    }
    for(int i = 0 ; i < j ; i++){
        cout<<nums[i]<<" ";
    }
}

int main(){
    vector<int>nums = {0,0,1,1,2,3,3,4,4,5};
    removeDuplicate(nums);
    return 0;
}