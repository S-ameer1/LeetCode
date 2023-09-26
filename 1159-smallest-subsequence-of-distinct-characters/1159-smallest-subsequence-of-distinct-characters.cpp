class Solution {
public:
string removeDuplicates(string s) {
         vector<char> stack;
        unordered_map<char,int> chars;
        for(char c: s) chars[c]++;
        
        for(char c : s){
            chars[c]--;
            if(find(stack.begin(), stack.end(), c) != stack.end() )
                continue;
            while( !stack.empty() && c < stack.back() && chars[stack.back()] > 0 )
                stack.pop_back();
            stack.push_back(c);
            
        }
        return string(stack.begin(), stack.end());
    }
    
    string smallestSubsequence(string s) {
       return removeDuplicates(s);
    }
};