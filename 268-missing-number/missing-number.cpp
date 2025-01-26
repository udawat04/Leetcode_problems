class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        int acctualsum= n*(n+1)/2;
        for(auto it:nums){
            sum+=it;
        }
        int missingnum = acctualsum-sum;
        return missingnum;
    }
};