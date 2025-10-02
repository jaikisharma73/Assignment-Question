#include<iostream>
using namespace std;
int main(){
    int row;
    int column;
    cout<<"Enter the row :";
    cin>>row;
    cout<<"Enter the column :";
    cin>>column;
    for (int i = 0; i < row; i++){
       for (int j = 0; j < column; j++)
       {
        cout<<"* ";
       }
       cout<<endl;
    }
    

    return 0;
}