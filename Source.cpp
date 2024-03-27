#include <iostream>
#include <string>

using namespace std;

int countWords(const string& str) {
    int wordCount = 0;
    bool inWord = false;

    for (char c : str) {
        if (c == ' ' && inWord) {
            inWord = false;
        }
        else if (c != ' ' && !inWord) {
            inWord = true;
            wordCount++;
        }
    }

    return wordCount;
}

int main() {

    string testStr1 = "Hello world";
    string testStr2 = "This is a test string with multiple words";
    string testStr3 = "   Only one word   ";

    cout << "Test string 1: \"" << testStr1 << "\", Word count: " << countWords(testStr1) << endl;
    cout << "Test string 2: \"" << testStr2 << "\", Word count: " << countWords(testStr2) << endl;
    cout << "Test string 3: \"" << testStr3 << "\", Word count: " << countWords(testStr3) << endl;

    return 0;
}