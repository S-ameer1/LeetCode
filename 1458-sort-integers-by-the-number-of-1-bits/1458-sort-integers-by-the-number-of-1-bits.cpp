class Solution {
public:
    static bool help(int a,int b){
         int a1=__builtin_popcount(a);
         int b1=__builtin_popcount(b);
         if(a1!=b1){
             return a1<b1;
         }
         else{
             return a<b;
         }

    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),help);
        return arr;

    }
};