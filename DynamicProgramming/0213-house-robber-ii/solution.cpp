class Solution {
public:
    int helper(vector<int>& nums, int st, int end){
        int n = nums.size();
        vector<int> DP(n);

        DP[st] = nums[st];
        DP[st+1] = max(nums[st], nums[st+1]);

        for(int i=st+2; i<=end; i++){
            DP[i] = max(DP[i-1], DP[i-2] + nums[i]);
        }
        return DP[end];
    }

    int rob(vector<int>& nums) {
        int n= nums.size();

        if(n==1) return nums[0];
        if(n==2) return max(nums[0], nums[1]);

        int case1 = helper(nums, 0, n-2);
        int case2 = helper(nums, 1, n-1);

        return max(case1, case2);
    }
};