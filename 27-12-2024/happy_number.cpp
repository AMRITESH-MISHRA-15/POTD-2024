class Solution {
public:
    bool isHappy(int n) {
        // convert to single digit first
        while (n > 9) {  
            int sum=0;
            while(n!=0){
                sum+=((n%10)*(n%10));
                n/=10;
            }
            n=sum;
        }
        if (n == 1 || n == 7) return 1;
        return 0;
    }
};