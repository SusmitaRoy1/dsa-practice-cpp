class Solution {
public:
    int binSearch(vector<int>& nums, int tar, int st, int end){
        if(st<=end){
            int mid = st + (end-st)/2;
            if(tar == nums[mid]){
                return mid;
            }else if(tar >= nums[mid]){
               return binSearch(nums,tar,mid+1,end);
            }else{
                return binSearch(nums,tar,st,mid-1);
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int tar) {
       return binSearch(nums, tar, 0, nums.size()-1);
    }
};