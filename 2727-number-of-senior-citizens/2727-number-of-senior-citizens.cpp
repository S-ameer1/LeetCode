class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n=details.size();
        int count=0;
        for(int i=0;i<n;i++){
            string age="";
            age.push_back(details[i][11]);
            age.push_back(details[i][12]);
            int a=stoi(age);
                if(a>60){
                    count++;
                }
        }
        
        return count;
    }
};