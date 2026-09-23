class Solution {
public:
    int fibDP(int n, vector<int>& DP){
         if(n==0 || n==1){
            return n;
        }
        if(DP[n] != -1) return DP[n];
        return DP[n] = fibDP(n-1, DP) + fibDP(n-2, DP);

    }
    int fib(int n) {
       vector<int> DP(n+1, -1);
       return fibDP(n, DP);
    }
};