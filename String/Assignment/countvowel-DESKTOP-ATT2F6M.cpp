#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Enter a string : ";
    getline(cin, input);

    int aCount = 0, eCount = 0, iCount = 0, oCount = 0, uCount = 0;

    for (char ch : input) {
        if (ch == 'a') aCount++;
        else if (ch == 'e') eCount++; 
        else if (ch == 'i') iCount++;
        else if (ch == 'o') oCount++;
        else if (ch == 'u') uCount++;
    }

    cout << "Lowercase vowel counts:\n";
    cout << "a: " << aCount << endl;
    cout << "e: " << eCount << endl;
    cout << "i: " << iCount << endl;
    cout << "o: " << oCount << endl;
    cout << "u: " << uCount << endl;

    return 0;
}
