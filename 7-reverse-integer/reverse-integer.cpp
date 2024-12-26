class Solution {
public:
    int reverse(int x) {
        int digit;
        long rev=0;
        
        
            while(x){
            digit =x%10;
            rev =(rev*10)+digit;
            x/=10;
        }
        
        if(rev>=INT_MAX || rev<=INT_MIN){
            return 0;
        }
        else{
            return int(rev);
        }
    }
};