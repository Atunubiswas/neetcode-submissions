class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n = s.size(), m = t.size();

        int sIndex = 0;
        for(int i = 0; i <= m - 1; i++) {
            if(t[i] == s[sIndex]) {
                sIndex = sIndex + 1;
            }
        }

        return sIndex == n;
    }
};