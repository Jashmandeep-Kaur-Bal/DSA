class Solution {
public:
    int SS(int n){
        int sum=0;
        while(n>0){
            int lastDigit=n%10;
            n=n/10;
            sum+=pow(lastDigit,2);
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=SS(n);
        int fast=SS(SS(n));

        while(slow!=fast){
            slow=SS(slow);
            fast=SS(SS(fast));
        }
        if(slow==1) return true;
        return false;
        
    }
};