class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string, greater<int> >mp;
        int n=names.size();
        for(int i=0;i<n;i++){
            mp[heights[i]]=names[i];
        }
        int j=0;
        for(auto i:mp){
            names[j]=i.second;
            j++;
        }
        return names;
    }
};