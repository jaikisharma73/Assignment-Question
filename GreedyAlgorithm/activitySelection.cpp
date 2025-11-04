#include<iostream>
#include<vector>
using namespace std;
int maximumActivities(vector<int>start,vector<int>end){
    //sort on end time
    //A0 select
    cout<<"selecting A0 \n";
    int count = 1;
    int currEndTime = end[0];
    for (int i = 1; i <= start.size(); i++){
        if(start[i]>=currEndTime){ //non-overlaping
            cout<<"Selecting A"<<i<<endl;
            count++;
            currEndTime = end[i];
        }
    }
    return count;
} 
int main(){
    vector<int>start = {1,3,0,5,8,5};
    vector<int>end = {2,4,6,7,9,9}; //4
    cout<<maximumActivities(start, end);
    return 0;
}