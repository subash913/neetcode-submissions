class PrefixTree {
public:
    struct TrieNode {
        vector<TrieNode*> children;
        bool isWord;

        TrieNode() : children(26), isWord(false) {}
    };

    TrieNode* root;

    PrefixTree() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* curr = root;
        for (int i = 0; i < word.length(); ++i) {
            if (curr->children[word[i] - 'a'] == nullptr) {
                curr->children[word[i] - 'a'] = new TrieNode();
            }
            curr = curr->children[word[i] - 'a'];
        }
        curr->isWord = true;
    }
    
    bool search(string word) { 
        TrieNode* curr = root;
        for (int i = 0; i < word.length(); ++i) {
            if (curr->children[word[i] - 'a'] == nullptr) {
                return false;
            }
            curr = curr->children[word[i] - 'a'];
        } 
        return curr->isWord;
    }
    
    bool startsWith(string prefix) {
        TrieNode* curr = root;
        for (int i = 0; i < prefix.length(); ++i) {
            if (curr->children[prefix[i] - 'a'] == nullptr) {
                return false;
            }
            curr = curr->children[prefix[i] - 'a'];
        }
        return true;
    }
};
