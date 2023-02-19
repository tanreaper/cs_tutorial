#include<iostream>
#include<string>
using namespace std;
const int ALPHABET_SIZE = 26;

struct TrieNode {

    struct TrieNode *links[ALPHABET_SIZE];
    bool endOFWord;

};

struct TrieNode *getNode(void) {
    // Write your code here
}

void insert(struct TrieNode *root, string key) {
    // Write your code here
}

bool search(struct TrieNode *root, string key) {
    // Write your code here
}
int main() {
    string keys[] = {"the", "a", "there",
                    "answer", "any", "by",
                     "bye", "their" };
    return 0;
}   
