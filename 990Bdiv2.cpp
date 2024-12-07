#include <iostream>
#include <string>
using namespace std;

void sol() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int maxind = 0;
    int hash[26] = {0};
    int minind = 0;
    int minfreq;
    int maxfreq = 0;

    for (int i = 0; i < n; i++) {
        hash[s[i] - 'a']++;
    }

    for (int j = 0; j < 26; j++) {
        if (hash[j] > hash[maxind]) {
            maxfreq = hash[j];
            maxind = j;
        }
    }

    minfreq = maxfreq;
    minind = maxind;
    bool foundMin = false;

    for (int k = 0; k < 26; k++) {
        if (hash[k] > 0 && hash[k] < minfreq) {
            minfreq = hash[k];
            minind = k;
            foundMin = true;
        }
    }

    char minChar = foundMin ? char(minind + 'a') : s[0];
    char maxChar = char(maxind + 'a');

    if (minChar == maxChar) {
        for (int k = 0; k < 26; k++) {
            if (hash[k] > 0 && k != maxind) {
                minChar = char(k + 'a');
                break;
            }
        }
    }

    int l = 0;
    while (l < n) {
        if (s[l] == minChar) {
            break;
        }
        l++;
    }

    s[l] = maxChar;

    cout << s << endl;
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        sol();
    }

    return 0;
}
