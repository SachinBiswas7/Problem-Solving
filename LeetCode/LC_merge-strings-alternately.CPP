#include <iostream>
#include <string>
#include <queue>
using namespace std;

string mergeAlternately(string word1, string word2) {
    int n, m, s, l;

    n = word1.length();
    m = word2.length();
    if (n > m) {
        s = m;
        l = n;
    } else {
        s = n;
        l = m;
    }

    queue<char> word;
    for (int i = 0; i < s; i++) {
        word.push(word1[i]);
        word.push(word2[i]);
    }
    for (int i = s; i < l; i++) {
        if (n > m)
            word.push(word1[i]);
        else
            word.push(word2[i]);
    }

    string sr;
    while (!word.empty()) {
        char a = word.front();
        word.pop();
        sr += a;
    }

    return sr;
}

int main() {
    string result = mergeAlternately("abc", "pqrww");
    cout << result << endl;
    return 0;
}
