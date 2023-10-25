class Solution {
private:
    int solve(int n, int k){
        if(k == 0)
            return 0;
        int p = pow(2, n - 1);
        int take = 0;
        if(p > k)
            take = solve(n - 1, k);
        else
            take = 1 + solve(n - 1, k - p);
        return take;
    }
public:
    int kthGrammar(int n, int k) {
        return solve(n - 1, k - 1) % 2 == 0 ? 0 : 1;
    }
};
