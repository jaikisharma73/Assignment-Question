#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main(){

    priority_queue<int, vector<int>, greater<int>>PQ;
    // priority_queue<int>PQ;

    PQ.push(3);
    PQ.push(6);
    PQ.push(4);
    PQ.push(7);
    PQ.push(10);

    while (!PQ.empty())
    {
        cout<<"Top : " << PQ.top()<<endl;
        PQ.pop();
    }
    

    return 0;
}