class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n==1) return nums[0];

        vector<int> DP(n);

        DP[0] = nums[0];
        DP[1] = max(nums[0], nums[1]);

        for(int i=2; i<n; i++){
            DP[i] = max(DP[i-2] + nums[i], DP[i-1]);
        }
        return DP[n-1];
    }
};