class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k-1);
    }
    int atMost(vector<int>& nums, int k){
        unordered_map<int, int> m;

        if(k < 0) return 0;
        int count = 0, l = 0, r = 0;

        while(r < nums.size()){
            m[nums[r]]++;

            while(m.size() > k){
                m[nums[l]]--;

                if(m[nums[l]] == 0){
                    m.erase(nums[l]);
                }
                l++;
            }
            count += (r-l+1);
            r++;
        }
        return count;
    }
};