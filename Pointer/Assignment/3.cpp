#include<iostream>
using namespace std;

int main(){
    int a = 32;               // Declare an integer 'a' and initialize it with the value 32.
    int *ptr = &a;            // Declare a pointer 'ptr' and initialize it with the address of 'a'.

    char ch = 'A';            // Declare a character 'ch' and initialize it with the character 'A'.
    char &cho = ch;           // Declare a reference 'cho' to the character 'ch'. This means 'cho' will refer to the    same location as 'ch'.

    cho =cho + a;                 // Increment 'cho' (which refers to 'ch') by the value of 'a' (which is 32).
                              // This means 'cho' is modified, and 'ch' is also modified because 'cho' is just another name for 'ch'.
                              // 'ch' starts as 'A', which is 65 in ASCII. After adding 32 to it, 'ch' becomes 'a' (ASCII value 97).
    
    *ptr += ch;               // Dereference the pointer 'ptr' to access the value of 'a', and increment 'a' by the value of 'ch'.
                              // At this point, 'ch' has the value 97 ('a' in ASCII).
                              // So, 'a' (which was 32) is incremented by 97, and it becomes 32 + 97 = 129.
    
    cout << a << ", " << ch << endl;  // Output the values of 'a' and 'ch'. At this point, 'a' is 129 and 'ch' is 'a'.
}
