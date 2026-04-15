#include <iostream>
#include <algorithm>  // needed for swap
using namespace std;

int main() {
    char ch[] = {'e','f','a','b','d'};
    int n = 5;

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(ch[j] > ch[j + 1]) {
                swap(ch[j], ch[j + 1]);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        cout << ch[i] << " ";
    }

    return 0;
}