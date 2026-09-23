class Solution {
public:
    void subSets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>&storeSubsets){
        if(i == nums.size()){
            storeSubsets.push_back({ans});
            return;
        }
        
        ans.push_back(nums[i]);
        subSets(nums, ans, i+1, storeSubsets);

        ans.pop_back();
        subSets(nums, ans, i+1, storeSubsets);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>storeSubsets;
        vector<int>ans;
        subSets(nums,ans,0, storeSubsets);
        
        return storeSubsets;
    }
};