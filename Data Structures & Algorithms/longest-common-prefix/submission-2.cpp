class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) {
            return "";
        }

        string result = "";

        for(int i = 0; i < strs[0].size(); i++) {
            for(int j = 1; j < strs.size(); j++) {
                if(i == strs[j].size() or strs[j][i] != strs[0][i]) {
                    return result;
                }
            }
            result = result + strs[0][i];
        }

        return result;
    }
};