class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> mp;
        for( auto c : s ){
            mp[c]++;
        }
        int first = mp[s[0]];
        for( auto pair : mp){
           if( pair.second != first ) return false; 
        }
        return true;
    }
};