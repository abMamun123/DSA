#include <iostream>
#include <string>
#include <vector>

using namespace std;

void merge(vector<string>& words, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<string> L(n1);
    vector<string> R(n2);

    for (int i = 0; i < n1; i++) {
        L[i] = words[left + i];
    }

    for (int j = 0; j < n2; j++) {
        R[j] = words[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            words[k] = L[i];
            i++;
        }
        else {
            words[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        words[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        words[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<string>& words, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(words, left, mid);
        mergeSort(words, mid + 1, right);
        merge(words, left, mid, right);
    }
}

int main() {
    string line;
    cout << "Enter a line of words to sort: ";
    getline(cin, line);
    cout << "Original line: " << line << endl;

    vector<string> words;
    string word = "";
    for (char c : line) {
        if (c == ' ') {
            words.push_back(word);
            word = "";
        }
        else {
            word += c;
        }
    }
    words.push_back(word); // add the last word

    mergeSort(words, 0, words.size() - 1);

    cout << "Sorted line: ";
    for (string w : words) {
        cout << w << " ";
    }
    cout << endl;
    return 0;
}
