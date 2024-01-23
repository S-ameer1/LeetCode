class Solution {
public:
    bool check(int i, string arr, string& temp) {
        vector<int> v(26, 0);
        vector<int> v2(26, 0);
        for (int j = 0; j < temp.size(); j++) {
            v[temp[j] - 'a']++;
        }
         for (int j = 0; j < arr.size(); j++) {
            v2[arr[j] - 'a']++;
            if(v2[arr[j]-'a']>1){
                return 0;
            }
        }
        for (int j = 0; j < arr.size(); j++) {
            if (v[arr[j] - 'a'] > 0) {
                return false;
            }
        }
        
        return true;
    }

    int help(int i, vector<string>& arr, string& temp, int n) {
        if (i >= n) {
            return 0;
        }
        int take = 0;
        if (check(i, arr[i], temp)) {
            temp += arr[i];
            take = arr[i].size() + help(i + 1, arr, temp, n);
            temp = temp.substr(0, temp.size() - arr[i].size());  // Remove the last added string
        }
        int nottake = help(i + 1, arr, temp, n);
        return max(take, nottake);
    }

    int maxLength(vector<string>& arr) {
        int n = arr.size();
        string temp = "";
        int ans = help(0, arr, temp, n);
        return ans;
    }
};
