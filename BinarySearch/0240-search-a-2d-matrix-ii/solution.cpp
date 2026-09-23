class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool ans = false;
        int r = 0, c = n-1;
        while(c >= 0 && r <= m-1){
            if(target == matrix[r][c]){
               ans = true;
               break;
            }else if(target < matrix[r][c]){
                c--;
            }else{
                r++;
            }
        }
        return ans;
    }
};