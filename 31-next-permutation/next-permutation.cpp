class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int swaps=0,index,check;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i]>nums[i-1]){
                swaps++;
                index=i;
                break;
            }
        }
        int t=index;
        check=index-1;
        if(swaps==0){
            sort(nums.begin(),nums.end());
        }
        else{
            for(int i=index;i<nums.size();i++){
                if(nums[i]<nums[index]&&nums[i]>nums[check]){
                    index=i;
                    
                }
            }
            int temp=nums[index];
            nums[index]=nums[check];
            nums[check]=temp;
            sort(nums.begin()+t,nums.end());
        }

        
    }
};