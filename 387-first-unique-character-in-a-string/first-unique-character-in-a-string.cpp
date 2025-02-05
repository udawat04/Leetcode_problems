class Solution {
public:
    int firstUniqChar(string s) {
         unordered_map<char, int> char_count;

    // Step 1: Count occurrences of each character
    for (char ch : s) {
        char_count[ch]++;
    }

    // Step 2: Find the first unique character
    for (int i = 0; i < s.length(); i++) {
        if (char_count[s[i]] == 1) {
            return i;  // Return index of first unique character
        }
    }

    return -1;  // If no unique character found
}
};