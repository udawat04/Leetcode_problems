class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> freq;
        vector<int>value;
        for(auto it:nums1){
           freq[it]++;
        }

        for(auto it:nums2){
            if(freq[it]>0){
                value.push_back(it);
                freq[it]--;
            }
        }
        return value;
    }
};