class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int lsum = 0;
        int maxPoints = 0;

        for(int i=0; i<k; i++){
            lsum += cardPoints[i];
        }
        maxPoints = lsum;

        for(int i=0; i<k; i++){
            lsum = lsum - cardPoints[k-1-i] + cardPoints[n-1-i];
            
            maxPoints = max(maxPoints, lsum);
        }
         return maxPoints;
    }
};