#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      unordered_set<int> hashset(nums1.begin(),nums1.end());
      unordered_set<int> result;

      for(auto it:nums2){
        if(hashset.count(it)){
            result.insert(it);
        }
      }
      return vector<int>(result.begin(),result.end());
    }
};
