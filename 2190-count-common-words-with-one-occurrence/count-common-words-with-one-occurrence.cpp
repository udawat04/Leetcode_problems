class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> freq1, freq2;
        int count = 0;

        for (string &word : words1) {
            freq1[word]++;
        }

        for (string &word : words2) {
            freq2[word]++;
        }

     
        for (auto &[word, freq] : freq1) {
            if (freq == 1 && freq2[word] == 1) {
                count++;
            }
        }

        return count;
    }
};