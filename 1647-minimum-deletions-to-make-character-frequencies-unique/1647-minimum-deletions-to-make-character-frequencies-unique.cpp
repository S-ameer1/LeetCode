class Solution {
public:
    int minDeletions(string s) {
        vector<int>freq(26,0);
        int InitialSum=s.size();
        for(int i=0;i<s.size();i++){
            int index=s[i]-'a';
            freq[index]++;
            
        }
        unordered_map<int,bool>map;
        
        int remove=0;
        for(int i=0;i<26;i++){
         
                if(map[freq[i]]==0){
                    map[freq[i]]=1;
                    continue;
                }
                else{
                    while(freq[i]>0){
                    freq[i]--;
                    remove++;
                    if(map[freq[i]]==0){
                        map[freq[i]]=1;
                        break;
                    }

                    }
                }
        }
        
        return remove;


        
    }
};