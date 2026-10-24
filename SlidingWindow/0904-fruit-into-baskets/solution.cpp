class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l = 0, r =0;
        int maxi = 0;

        unordered_map<int, int> m;

        while(r < fruits.size()){
            m[fruits[r]]++;

            if(m.size() > 2){
                m[fruits[l]]--;
            
                if(m[fruits[l]] == 0){
                    m.erase(fruits[l]);
                }
                l++;
            }
            maxi = max(maxi, r-l+1);
            r++;
        }
        return maxi;
    }
};