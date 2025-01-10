class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int boxnumber[50]={};
        for(int i=lowLimit;i<=highLimit;i++){
            int temp=i;
            int sum=0;
            while(temp){
                sum=sum+temp%10;
                temp/=10;
                
            }
           
          boxnumber[sum]++;   
        }
        int max=boxnumber[0];
        for(int i=0;i<50;i++){
            if(max < boxnumber[i]){
                max=boxnumber[i];
            }
        }
        return max;
        
    }
};