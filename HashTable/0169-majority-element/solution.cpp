class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int majEle = nums[0];
        int count = 1;
        for(int i =1; i<nums.size(); i++)
        {
            if(nums[i] == majEle)
            {
                count++;
            }
            else
            {
                count--;
                if(count == 0)
                {
                    majEle = nums[i];
                    count = 1;
                }
            }
        }
        return majEle;
    }
};