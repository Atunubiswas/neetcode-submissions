class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();

        int len = 0, prevLen = 0;
        for(int i = 0; i <= n - 1; i++) {
            if(s[i] == ' ') {
                if(len != 0) {
                    prevLen = len;
                }
                len = 0;
            }
            else {
                len = len + 1;
            }
        }

        return len == 0 ? prevLen : len;
    }
};