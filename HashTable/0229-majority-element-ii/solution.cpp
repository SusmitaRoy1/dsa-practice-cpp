class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int ct1 = 0; 
        int ct2 = 0;
        int el1;
        int el2;

        for(int i=0; i<n; i++){
            if(ct1 == 0 && nums[i] != el2){
                ct1 =1;
                el1 = nums[i];
            }else if(ct2 == 0 && nums[i] != el1){
                ct2 =1;
                el2 = nums[i];
            }else if(nums[i] == el1){
                ct1++;
            }else if(nums[i] == el2){
                ct2++;
            }else{
                ct1--, ct2--;
            }
        }
        vector<int> ans;
        int cnt1 = 0, cnt2 = 0;
        for(int i=0; i<n; i++){
            if(el1 == nums[i]) cnt1++;
            if(el2 == nums[i]) cnt2++;
        }
        if(cnt1 > floor(n/3)){
            ans.push_back(el1);
        }
        if(cnt2 > floor(n/3)){
            ans.push_back(el2);
        }
        return ans;
    }
};