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

    string userInput;
    while (true) {
        cout << "Enter a string pr Q to quit: ";
        getline(cin, userInput);

        if (userInput == "Q") {
            break;
        }

        int words = countWords(userInput);
        cout << "\nWord count: " << words << endl;
    }

    return 0;
}