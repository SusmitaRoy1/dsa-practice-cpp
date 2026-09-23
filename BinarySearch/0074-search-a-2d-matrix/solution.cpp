class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        bool found = false;
        int m = matrix.size();
        int n = matrix[0].size();

        int sRow = 0;
        int endRow = m-1;
        while(sRow <= endRow){
            int midRow = sRow + (endRow - sRow)/2;

            if (matrix[midRow] [0] <= target && target <= matrix[midRow] [n-1])
            {
                    int start = 0, end = n-1, mid;
                    while(start<=end)
                    {
                        mid = start + (end - start)/2;
                        if(matrix[midRow][mid] == target)
                        {
                            found = true;
                            break;
                        }
                        else if(matrix[midRow][mid] < target)
                        {
                            start = mid+1;
                        }
                        else
                        {
                            end = mid -1;
                        }
                    }
                    break;
            }
            else if(target >= matrix[midRow][n-1])
            {
                sRow = midRow + 1;
            }else
            {
                endRow = midRow - 1;
            }
        }
        return found;
    }
};