class Solution {
public:
    char repeatedCharacter(string s) {
        
        unordered_map<int,char>rep;
        char repcount;
        for(int i=0;i<s.size();i++){
            if(rep.count(s[i])){
                repcount = s[i];
                break;
            }

            rep[s[i]]=i;
        }
        return repcount;
    }
};