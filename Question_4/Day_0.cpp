#include <iostream>

using namespace std;

string genWord(string word, int k) {
    if(word.size() > k) return word;

    string temp;

    for(int i=0; i < word.size(); i++) {
        if(word[i] == 'z') {
            temp.append(1, 'a');
        } else {
            temp.append(1, word[i]+1);
        }
    }

    return genWord(word + temp, k);
}

int main() {
    int k = 5;
    string word = "a";

    word = genWord(word, k-1);

    cout << "The kth Element is : " << word[k-1] << endl;

    return 0;
}