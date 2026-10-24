class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> ans(n);
        int i = 0;

        for(int x : nums){
            if(x < pivot){
                ans[i] = x;
                i++;
            }
        }
        for(int x: nums){
            if(x == pivot){
                ans[i] = x;
                i++;
            }
        }
        for(int x : nums){
            if(x > pivot){
                ans[i] = x;
                i++;
            }
        }
        return ans;
    }
};