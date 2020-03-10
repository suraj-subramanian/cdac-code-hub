// Suraj Subramanian
// Program to check if a given string is a palindrome

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    bool flag = false;
    getline(cin, str);

    for(int i = 0, j = str.length()-1; i<str.length()/2; i++, j--) {
        if(str[i] != str[j]) {
            flag = true;
            break;
        }
    }

    flag?cout<<"Not Palindrome\n":cout<<"Palindrome\n";
    
    return 0;
}