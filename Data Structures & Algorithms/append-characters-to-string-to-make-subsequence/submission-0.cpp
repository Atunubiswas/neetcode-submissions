class Solution {
public:
    int appendCharacters(string s, string t) {
        int n = s.size(), m = t.size();

        int tIndex = 0;
        for(int i = 0; i <= n - 1; i++) {
            if(s[i] == t[tIndex]) {
                tIndex++;
            }
        }

        return m - tIndex;
    }
};