class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        bool flag=0;
        int i=1;
        int maxi=*max_element(arr.begin(),arr.end());
        unordered_map<int,int>map;
        while(flag==0){
            if(arr[i-1]==maxi){
                flag=1;
                return maxi;
            }
            if(arr[i-1]>arr[i]){
                map[arr[i-1]]++;
                if(map[arr[i-1]]==k){
                    flag=1;
                    return arr[i-1];
                }
                arr.push_back(arr[i]);
                arr[i]=arr[i-1];
                i++;
            }
            else{
                map[arr[i]]++;
                if(map[arr[i]]==k){
                    return arr[i];
                    flag=1;
                }
                arr.push_back(arr[i-1]);
                i++;
            }

        }
        return -1;
    }
};