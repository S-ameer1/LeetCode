class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string>s;
        int j;
        for (int i = 0; i < words[0].length(); i++) {
            for (j = 1; j < words.size(); j++) {
                if (find(words[j].begin(), words[j].end(), words[0][i]) !=
                    words[j].end()) {
                    words[j].erase(
                        find(words[j].begin(), words[j].end(), words[0][i]));
                    continue;
                } else
                    break;
            }
            if (j == words.size())
                s.push_back(string(1,words[0][i]));
        }
        
        return s;
    }
};