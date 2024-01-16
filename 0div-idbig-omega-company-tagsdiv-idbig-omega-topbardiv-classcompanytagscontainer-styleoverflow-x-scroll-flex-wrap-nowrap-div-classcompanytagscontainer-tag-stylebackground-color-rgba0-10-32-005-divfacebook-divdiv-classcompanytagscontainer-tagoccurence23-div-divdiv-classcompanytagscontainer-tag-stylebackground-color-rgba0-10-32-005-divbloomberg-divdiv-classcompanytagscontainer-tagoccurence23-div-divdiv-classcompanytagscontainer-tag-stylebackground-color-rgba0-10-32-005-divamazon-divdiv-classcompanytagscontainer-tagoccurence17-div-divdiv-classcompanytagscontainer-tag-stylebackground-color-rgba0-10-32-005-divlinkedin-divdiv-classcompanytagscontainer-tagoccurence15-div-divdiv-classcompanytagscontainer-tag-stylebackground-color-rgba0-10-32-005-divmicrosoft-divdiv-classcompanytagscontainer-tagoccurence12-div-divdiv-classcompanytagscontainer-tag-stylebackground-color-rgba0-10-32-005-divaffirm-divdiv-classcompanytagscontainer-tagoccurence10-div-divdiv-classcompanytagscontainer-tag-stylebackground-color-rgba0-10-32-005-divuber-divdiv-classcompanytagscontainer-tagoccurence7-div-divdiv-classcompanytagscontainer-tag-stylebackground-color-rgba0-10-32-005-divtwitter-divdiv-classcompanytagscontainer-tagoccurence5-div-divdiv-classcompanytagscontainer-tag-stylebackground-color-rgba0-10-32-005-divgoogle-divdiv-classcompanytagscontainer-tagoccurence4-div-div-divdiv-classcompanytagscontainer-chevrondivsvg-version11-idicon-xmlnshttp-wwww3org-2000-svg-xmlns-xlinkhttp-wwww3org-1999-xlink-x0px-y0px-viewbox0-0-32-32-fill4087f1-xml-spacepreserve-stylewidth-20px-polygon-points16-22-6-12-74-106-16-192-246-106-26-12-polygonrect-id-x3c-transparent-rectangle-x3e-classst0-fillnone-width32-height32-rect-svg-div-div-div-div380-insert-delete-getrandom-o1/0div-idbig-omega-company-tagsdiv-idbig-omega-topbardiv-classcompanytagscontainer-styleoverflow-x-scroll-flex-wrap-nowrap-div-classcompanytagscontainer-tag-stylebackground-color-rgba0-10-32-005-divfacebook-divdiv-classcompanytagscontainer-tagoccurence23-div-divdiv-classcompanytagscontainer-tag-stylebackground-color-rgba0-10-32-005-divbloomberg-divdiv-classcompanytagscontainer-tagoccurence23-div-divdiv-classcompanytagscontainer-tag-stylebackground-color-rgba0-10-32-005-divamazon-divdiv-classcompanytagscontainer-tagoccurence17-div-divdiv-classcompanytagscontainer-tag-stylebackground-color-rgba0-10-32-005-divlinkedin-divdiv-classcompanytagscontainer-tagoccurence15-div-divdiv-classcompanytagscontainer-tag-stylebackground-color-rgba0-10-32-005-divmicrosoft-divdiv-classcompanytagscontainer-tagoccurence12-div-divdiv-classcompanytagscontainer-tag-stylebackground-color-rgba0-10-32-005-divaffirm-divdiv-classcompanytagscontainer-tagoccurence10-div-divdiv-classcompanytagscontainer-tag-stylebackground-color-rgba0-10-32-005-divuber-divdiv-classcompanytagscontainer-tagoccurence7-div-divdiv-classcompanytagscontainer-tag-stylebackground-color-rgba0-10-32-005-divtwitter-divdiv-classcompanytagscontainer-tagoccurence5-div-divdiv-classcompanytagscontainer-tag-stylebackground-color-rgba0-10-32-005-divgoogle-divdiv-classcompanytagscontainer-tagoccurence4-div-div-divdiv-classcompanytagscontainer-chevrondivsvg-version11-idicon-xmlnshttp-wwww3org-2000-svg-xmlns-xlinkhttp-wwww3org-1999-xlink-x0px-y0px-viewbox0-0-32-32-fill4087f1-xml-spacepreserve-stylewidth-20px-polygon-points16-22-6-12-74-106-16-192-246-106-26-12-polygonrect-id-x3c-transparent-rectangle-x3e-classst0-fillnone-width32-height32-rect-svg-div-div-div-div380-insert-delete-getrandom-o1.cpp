class RandomizedSet {
private:
    unordered_map<int, int> m;
    vector<int> v;

public:
    RandomizedSet() {
    }

    bool insert(int val) {
        if (m.find(val) == m.end()) {
            m[val] = v.size();
            v.push_back(val);
            return 1;
        }
        return 0;
    }

    bool remove(int val) {
        if (m.find(val) != m.end()) {
            int lastElement = v.back();
            int indexToRemove = m[val];

            v[indexToRemove] = lastElement;
            m[lastElement] = indexToRemove;
            v.pop_back();
            m.erase(val);

            return 1;
        }
        return 0;
    }

    int getRandom() {
        int randomIndex = rand() % v.size();
        return v[randomIndex];
    }
};
