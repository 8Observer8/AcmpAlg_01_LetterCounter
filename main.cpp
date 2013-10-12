/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on September 9, 2013, 10:56 AM
 */

#include <iostream>
#include <string>
using namespace std;

/**
 * The number of different letters in the word
 * 
 * @param word The word
 * @return The number of different letters in the word
 */
int differentLetters(string word) {
    double r = 0;
    int n = 0;

    for (int i = 0; i < word.length(); ++i) {
        n = 0;
        for (int j = 0; j < word.length(); ++j) {
            if (word[i] == word[j]) {
                ++n;
            }
        }
        r = r + (int) (1.0 / n);
    }

    return (int) r;
}

int main(int argc, char** argv) {
    string s;
    int n = 0;

    cin >> s;
    n = differentLetters(s);
    cout << "The number of different letters in the word: " << n << endl;

    return 0;
}

