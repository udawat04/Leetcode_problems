class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int close = nums[0];
        for (auto it : nums) {
            if (abs(close) > abs(it) || abs(close) == abs(it) && it > close) {
                close=it;
            }
        }
        return close;
    }
};