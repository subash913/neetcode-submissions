class MyHashSet {
public:
    vector<int> s;
    MyHashSet() {
        vector<int> empty;
        s = empty;
    }
    
    void add(int key) {
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == key) {
                return;
            }
        }
        s.push_back(key);
    }
    
    void remove(int key) {
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == key) {
                s[i] = -1;
            }
        }
    }
    
    bool contains(int key) {
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == key) {
                return true;
            }
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */