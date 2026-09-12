class Solution {
public:
    int addDigits(int num) {
        int lastdigit = 0;
        while(num>9){
            lastdigit = num%10;
            num=num/10;
            num+=lastdigit;
        }
        return num;
    }
};