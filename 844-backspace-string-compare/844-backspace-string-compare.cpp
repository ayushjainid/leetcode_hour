class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n = s.length();
        int m = t.length();
        
        vector<char> sVector;
        vector<char> tVector;
        
        for(int start_s = 0; start_s < n; start_s++) {
            if(s[start_s] != '#') 
                sVector.push_back(s[start_s]);
            else {
                if(s[start_s] == '#' && sVector.size() != 0) {
                    sVector.pop_back();
                }
                else {
                    continue;
                }
            }
        }
        for(int start_t = 0; start_t < m; start_t++) {
            if(t[start_t] != '#') 
                tVector.push_back(t[start_t]);
            else {
                if(t[start_t] == '#' && tVector.size() != 0) {
                    tVector.pop_back();
                }
                else {
                    continue;
                }
            }
        }
        if(sVector == tVector)
            return true;
        else
            return false;
    }
};