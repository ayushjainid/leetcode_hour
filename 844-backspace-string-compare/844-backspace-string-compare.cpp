class Solution {
public:
    bool backspaceCompare(string s, string t) {
//         //Approach 1: Two vectors storing the final string and then comparing
//         int n = s.length();
//         int m = t.length();
        
//         vector<char> sVector;
//         vector<char> tVector;
        
//         for(int start_s = 0; start_s < n; start_s++) {
//             if(s[start_s] != '#') 
//                 sVector.push_back(s[start_s]);
//             else {
//                 if(s[start_s] == '#' && sVector.size() != 0) {
//                     sVector.pop_back();
//                 }
//                 else {
//                     continue;
//                 }
//             }
//         }
//         for(int start_t = 0; start_t < m; start_t++) {
//             if(t[start_t] != '#') 
//                 tVector.push_back(t[start_t]);
//             else {
//                 if(t[start_t] == '#' && tVector.size() != 0) {
//                     tVector.pop_back();
//                 }
//                 else {
//                     continue;
//                 }
//             }
//         }
//         if(sVector == tVector)
//             return true;
//         else
//         return false;
        
        //Approach 2: Two pointer
        int end_s = s.length() - 1, end_t = t.length() - 1;
        int deleteS = 0, deleteT = 0;
        
        while(end_s >= 0 || end_t >= 0) {
            while(end_s >= 0) {
                if(s[end_s] == '#') {
                    deleteS++;
                    end_s--;
                }
                else if(deleteS > 0) {
                    deleteS--;
                    end_s--;
                }
                else
                    break;
                }
            while(end_t >= 0) {
                if(t[end_t] == '#') {
                    deleteT++;
                    end_t--;
                }
                else if(deleteT > 0) {
                    deleteT--;
                    end_t--;
                }
                else break;
            }
            
            if(end_s >= 0 && end_t >=0 && s[end_s] != t[end_t]) {
                return false;
            }
            if((end_s >= 0) != (end_t >= 0)) {
                return false;
            }
            end_s--;
            end_t--;
        }
        return true;
    }
};