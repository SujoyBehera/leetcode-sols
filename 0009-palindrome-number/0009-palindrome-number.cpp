class Solution {
public:
    bool isPalindrome(int x) {
        int rev = 0;
        int lastdigit;
        int original = x;
        if(x < 0){
            return false;
        }
        while( x != 0){
            lastdigit = x % 10;
            x = x / 10;
            if( rev > INT_MAX/10 || rev < INT_MIN/10){
                return 0;
            }
            rev = (rev*10) + lastdigit; 
        }
        if( original == rev){
            return true ;
        }
        else{
            return false;
        }
        
    }
};