class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int negcount=0;
        int poscount =0;
        for(auto it:nums){
            if(it>0){
                negcount++;
            }
            else if(it<0){
                poscount++;
            }
        }
        int maxcount = max(negcount,poscount);
        return maxcount;
    }
};