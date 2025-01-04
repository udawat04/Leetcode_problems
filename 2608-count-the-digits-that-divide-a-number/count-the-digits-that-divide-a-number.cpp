class Solution {
public:
    int countDigits(int num) {
        int temp=num,digit,count=0;
        while(temp){
            digit=temp%10;
            if(num%digit==0){
                count++;
            }
            temp/=10;
        }
        return count;
    }
};