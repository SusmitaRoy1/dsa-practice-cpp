class Solution {
public:
    void subSets(vector<int>& nums,vector<int>& ans, int i,vector<vector<int>>& storeSubsets)
    {        
        if(i == nums.size())
        {
            auto it = find(storeSubsets.begin(),storeSubsets.end(),ans);
            if(it == storeSubsets.end())
            {
                storeSubsets.push_back(ans);
            }          
            return;
        }
        ans.push_back(nums[i]);
        subSets(nums, ans, i+1, storeSubsets);

        ans.pop_back();

        subSets(nums, ans, i+1, storeSubsets);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        vector<vector<int>>storeSubsets;
        vector<int>ans;

        sort(nums.begin(), nums.end());    
        subSets(nums, ans, 0, storeSubsets);

        return storeSubsets;
    }
};