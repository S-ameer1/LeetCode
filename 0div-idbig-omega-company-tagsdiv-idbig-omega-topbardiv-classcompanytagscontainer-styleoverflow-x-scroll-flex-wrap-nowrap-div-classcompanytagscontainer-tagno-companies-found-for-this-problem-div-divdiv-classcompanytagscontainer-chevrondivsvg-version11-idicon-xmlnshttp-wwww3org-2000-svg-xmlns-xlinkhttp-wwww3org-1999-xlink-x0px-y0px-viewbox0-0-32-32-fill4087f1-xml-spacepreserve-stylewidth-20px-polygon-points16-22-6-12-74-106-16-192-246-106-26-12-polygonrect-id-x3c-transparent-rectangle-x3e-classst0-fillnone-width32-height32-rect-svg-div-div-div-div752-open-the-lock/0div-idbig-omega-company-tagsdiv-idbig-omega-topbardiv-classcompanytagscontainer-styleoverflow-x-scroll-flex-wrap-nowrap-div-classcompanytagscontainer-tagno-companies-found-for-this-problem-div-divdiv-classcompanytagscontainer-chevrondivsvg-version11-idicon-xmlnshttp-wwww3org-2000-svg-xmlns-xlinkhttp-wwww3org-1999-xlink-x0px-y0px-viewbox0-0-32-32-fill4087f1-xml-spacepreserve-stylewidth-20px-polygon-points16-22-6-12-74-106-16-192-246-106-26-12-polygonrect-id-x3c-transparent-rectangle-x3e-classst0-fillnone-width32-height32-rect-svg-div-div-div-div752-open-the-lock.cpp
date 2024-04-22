class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string>visit;
        for(auto it:deadends)visit.insert(it);
        if(visit.count("0000"))return -1;

        queue<string>q;
        visit.insert("0000");
        q.push("0000");
        int res=0;

        while(!q.empty()){
            int sz=q.size();
            for(int i=0; i<sz; i++){
                string u=q.front();
                q.pop();
                if(u==target)return res;
                
                for(int j=0; j<4; j++){
                    for(int k=-1; k<=1; k+=2){
                        string temp=u;
                        temp[j]=(temp[j]-'0'+k+10)%10+'0';
                        if(!visit.count(temp)){
                            visit.insert(temp);
                            q.push(temp);
                        }
                    } 
                }
            }
            res++;
        }

        return -1;
    }
};