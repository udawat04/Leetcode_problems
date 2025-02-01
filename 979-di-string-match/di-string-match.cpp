class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size(), Dval = n, Ival = 0;
        vector<int> result(n, 0);
        for (int i = 0; i < n; i++) {
            if (s[i] == 'I')
                result[i] = Ival++;
            else
                result[i] = Dval--;
        }
        result.push_back(Ival);
        return result;
    }
};