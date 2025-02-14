class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes = 0;
        int currentMax = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                ++currentMax;
            } else {
                maxOnes = max(maxOnes, currentMax);
                currentMax = 0;
            }
        }
        
        return max(maxOnes, currentMax); 
    }
};
