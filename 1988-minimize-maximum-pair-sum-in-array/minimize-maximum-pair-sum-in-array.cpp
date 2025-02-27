class Solution {
public:
   int minPairSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        int maxPairSum = 0;
        
        for (int i = 0; i < n / 2; i++) {
            maxPairSum = max(maxPairSum, nums[i] + nums[n - i - 1]);
        }
        
        return maxPairSum;
    }
};