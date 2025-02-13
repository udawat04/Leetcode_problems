class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen; // Hash set to store unique numbers

        for (int num : nums) {
            if (seen.count(num)) return true; // Duplicate found
            seen.insert(num);
        }

        return false; // No duplicates
    }
};
