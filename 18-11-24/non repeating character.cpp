#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

char firstNonRepeatingCharacter(const string& s) {
    unordered_map<char, int> charCount;

    // Count occurrences of each character
    for (char ch : s) {
        charCount[ch]++;
    }

    // Find the first character with a count of 1
    for (char ch : s) {
        if (charCount[ch] == 1) {
            return ch;
        }
    }

    // If no non-repeating character is found
    return '$';
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    char result = firstNonRepeatingCharacter(s);
    if (result != '$') {
        cout << "The first non-repeating character is: " << result << endl;
    } else {
        cout << "No non-repeating character found." << endl;
    }

    return 0;
}
