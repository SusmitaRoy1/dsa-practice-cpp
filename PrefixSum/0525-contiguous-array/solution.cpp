class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int longSub = 0;
        unordered_map<int, int> m;

        for(int i=0; i<n; i++){
            if(nums[i] == 0){
                sum--;
            }else{
                sum++;
            }

            if(sum == 0){
                longSub = i + 1;
            }
            if(m.find(sum) != m.end()){
                longSub = max(longSub, i - m[sum]);
            }else{
                m[sum] = i;
            }
        }
        return longSub;
    }
};