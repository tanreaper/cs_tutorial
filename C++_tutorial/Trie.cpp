
#include <iostream> // #include <stdio.h>
using namespace std; 
const int ALPHABET_SIZE = 26;

struct TrieNode {

    struct TrieNode *links[ALPHABET_SIZE];
    bool endOFWord;

};

struct TrieNode *getNode(void) {
    struct TrieNode *newNode = new TrieNode(); // new -> malloc(siszof(struct TrieNode))
    for (int i=0; i<ALPHABET_SIZE; i++) {
        newNode->links[i] = NULL;
    } 
    newNode->endOFWord = false;
    return newNode;
}

void insert(struct TrieNode *root, string key) {
    struct TrieNode *temp = root;
    for (int i=0; i<key.length(); i++) {
        int index = key[i] - 'a';
        if(temp->links[index] == NULL) {
            temp->links[index] = getNode();
        } 
        temp = temp->links[index];
    }
    temp->endOFWord = true;
}

bool search(struct TrieNode *root, string key) {
    struct TrieNode *temp = root;
    for (int i=0; i<key.length(); i++) {
        int index = key[i] - 'a';
        if(temp->links[index] == NULL) {
            return false;
        } 
        temp = temp->links[index];
    }
    return (temp->endOFWord);
}


int main()
{
    // Input keys (use only 'a' through 'z'
    // and lower case)
    string keys[] = {"the", "a", "there",
                    "answer", "any", "by",
                     "bye", "their" };
    int n = sizeof(keys)/sizeof(keys[0]);
 
    struct TrieNode *root = getNode();
 
    // Construct trie
    for (int i = 0; i < n; i++)
        insert(root, keys[i]);
 
    // Search for different keys
    char output[][32] = {"Not present in trie", "Present in trie"};
 
    // Search for different keys
    cout<<"the"<<" --- "<<output[search(root, "the")]<<endl;
    cout<<"these"<<" --- "<<output[search(root, "these")]<<endl;
    cout<<"their"<<" --- "<<output[search(root, "their")]<<endl;
    cout<<"thaw"<<" --- "<<output[search(root, "thaw")]<<endl;

    // printf("the\n") = cout << "the" << endl;
    return 0;
}
