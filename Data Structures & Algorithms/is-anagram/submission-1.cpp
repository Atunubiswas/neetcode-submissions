class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size(), m = t.size();
        if(n != m) {
            return false;
        }

        unordered_map<char, int> countMap1;
        unordered_map<char, int> countMap2;

        for(int i = 0; i <= n - 1; i++) {
            countMap1[s[i]]++;
            countMap2[t[i]]++;
        }

        for(auto it: countMap1) {
            if(countMap2[it.first] != it.second) {
                return false;
            }
        }

        return true;
    }
};
