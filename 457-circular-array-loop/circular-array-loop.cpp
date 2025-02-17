class Solution {
public:
    bool circularArrayLoop(vector<int>& nums) {
        int n = nums.size();

        auto next = [&](int i) {
            return ((i + nums[i]) % n + n) % n; // Ensure index is within bounds
        };

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) continue; // Skip processed elements

            int slow = i, fast = i;

            // Check if the loop follows a single direction (either all +ve or all -ve)
            while (nums[slow] * nums[next(fast)] > 0 && nums[slow] * nums[next(next(fast))] > 0) {
                slow = next(slow);
                fast = next(next(fast));

                if (slow == fast) { 
                    if (slow == next(slow)) break; // Single-element cycle (invalid)
                    return true;
                }
            }

            // Mark all visited elements as 0 (to prevent re-processing)
            int val = nums[i];
            int j = i;
            while (nums[j] * val > 0) {
                int nextIndex = next(j);
                nums[j] = 0;
                j = nextIndex;
            }
        }

        return false;
    }
};
