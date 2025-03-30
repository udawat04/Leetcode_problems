class Solution {
public:
    int solve(string word, int n){
        unordered_set<char> vowel = {'a', 'e', 'i', 'o', 'u'};
        unordered_map<char, int> mp;
        int l = 0, r = 0, ans = 0;
        while(r < word.length()){
            if(vowel.count(word[r])) mp[word[r]]++;
            else{
                mp.clear();
                l = r + 1;
            }

            while(mp.size() > n){
                mp[word[l]]--;
                if(mp[word[l]] == 0) mp.erase(word[l]);
                l++;
            }
            ans += (r - l + 1);
            r++;
        }
        
        return ans;
    }

    int countVowelSubstrings(string word) {
        return (solve(word, 5) - solve(word, 4));
    }
};