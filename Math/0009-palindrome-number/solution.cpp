class Solution {
public:
    bool isPalindrome(int x) {
      if(x<0) return false;
      int y = x;
      long int rev = 0;
      while(y > 0){
        int dig = y % 10;
        rev = (rev * 10) + dig;
        y = y/10;
      }
      if (rev == x){
        return true;
      }else{
        return false;
      }

    }
};