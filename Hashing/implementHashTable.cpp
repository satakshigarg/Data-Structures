class HashEntry {
    public:
    int key;
    int val;
    HashEntry *next;
    HashEntry(int key, int val) {
        this -> key = key;
        this -> val = val;
        next = nullptr;
    }
}

class HashTable {
    public:
    vector<HashEntry> table;
    int getIndex(int key);
    
    
    void insertKeyVal(int key, int val) {
        int ind = getIndex(key);
        HashEntry temp = table[ind];
        HashEntry newNode = new HashEntry(key, val);
        newNode -> next = temp; //inserted node at the head
        table[ind] = newNode;
    }
}
