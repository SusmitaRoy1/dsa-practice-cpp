class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        m[0] = 1;
        int count = 0;
        int sum = 0;

        for(int i : nums){
            sum += i;
            int rem  = sum % k;

            if(rem < 0){
                rem += k;
            }
            count += m[rem];
            m[rem]++;
        }
       return count;
    }
};