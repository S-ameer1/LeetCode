class Solution {
public:

    int nthUglyNumber(int n) {
        vector<int>ans(n,0);
        ans[0]=1;
        int p2=0,p3=0,p5=0;
        for(int i=1;i<n;i++){
            ans[i]=min({ans[p2]*2,ans[p3]*3,ans[p5]*5});
            if(ans[i]==ans[p2]*2)p2++;
            if(ans[i]==ans[p3]*3)p3++;
            if(ans[i]==ans[p5]*5)p5++;

        }
        return ans[n-1];
    }
};