class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        int n=arr.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        set<pair<int,int>>s;
        for(auto i:m){
            s.insert({i.second,i.first});
        }
        int ans=s.size();
        for(auto i:s){
            if(k>=i.first){
                ans--;
                k-=i.first;
            }
            else{
                break;
            }
        }
        return ans;

    }
};