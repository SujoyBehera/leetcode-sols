class Solution {
public:
    int subtractProductAndSum(int n) {
        int lastdigit = 0;
        int product = 1;
        int sum = 0;
        while(n!=0){
            lastdigit = n%10;
            n/=10;
            product*=lastdigit;
            sum+=lastdigit;
        }
        return product - sum;

        
    }
};