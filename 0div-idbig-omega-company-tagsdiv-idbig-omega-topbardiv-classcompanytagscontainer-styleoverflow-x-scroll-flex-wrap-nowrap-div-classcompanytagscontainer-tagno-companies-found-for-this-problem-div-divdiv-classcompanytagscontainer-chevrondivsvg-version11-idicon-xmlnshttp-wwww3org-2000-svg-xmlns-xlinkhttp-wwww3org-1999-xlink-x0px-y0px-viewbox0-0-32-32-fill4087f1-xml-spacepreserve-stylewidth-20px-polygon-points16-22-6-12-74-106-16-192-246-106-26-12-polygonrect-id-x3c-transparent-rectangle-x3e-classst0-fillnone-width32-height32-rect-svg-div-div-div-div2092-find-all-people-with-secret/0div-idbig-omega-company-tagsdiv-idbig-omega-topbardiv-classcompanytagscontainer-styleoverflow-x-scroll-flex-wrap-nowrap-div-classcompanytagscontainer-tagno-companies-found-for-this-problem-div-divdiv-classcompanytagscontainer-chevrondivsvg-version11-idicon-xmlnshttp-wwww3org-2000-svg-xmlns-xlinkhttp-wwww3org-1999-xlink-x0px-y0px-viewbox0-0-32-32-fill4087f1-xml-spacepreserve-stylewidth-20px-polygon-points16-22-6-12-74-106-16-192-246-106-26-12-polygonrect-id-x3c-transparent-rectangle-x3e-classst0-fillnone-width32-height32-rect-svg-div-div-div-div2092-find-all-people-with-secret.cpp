class Solution {
public:
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        vector<bool> visited(n,false);
        vector<int> res;
        visited[0]=visited[firstPerson]=true;
        sort(meetings.begin(),meetings.end(),[](const auto& a,const auto& b){
            return a[2]<b[2];
        });
        
        for(int i=0;i<meetings.size();){
            int endidx=i;    
            while(endidx+1<meetings.size() && meetings[endidx+1][2]==meetings[i][2]){
                endidx++;
            }
            unordered_map<int,vector<int>> g;
            for(int j=i;j<=endidx;j++){
                int peopleA=meetings[j][0],peopleB=meetings[j][1];
                g[peopleA].push_back(peopleB);
                g[peopleB].push_back(peopleA);
            }
            queue<int> q;
            for(auto [key,peoples]:g){
                if(visited[key]) q.push(key);
            }
            while(!q.empty()){
                int node=q.front();q.pop();
                for(auto nei:g[node]){
                    if(!visited[nei]){
                        visited[nei]=true;
                        q.push(nei);
                    }
                }
            }
            i=endidx+1;
        }
        for(int i=0;i<n;i++){
            if(visited[i]) res.push_back(i);
        }
        return res;
    }
};