class Solution {
public:
    int mySqrt(int x) {
        int ans;
        if(x == 0){
            return 0;
        }
        for(int i = 1 ; i <= x/i; i++){
            ans = i;
        }
        return ans;
    }
};