class Solution {
public:
    bool hasDuplicate(vector<int>& arr) {
        int n = arr.size();

        unordered_map<int, int> countMap;
        for(int i = 0; i <= n - 1; i++) {
            countMap[arr[i]]++;
        }

        for(auto it: countMap) {
            if(it.second > 1) {
                return true;
            }
        }

        return false;
    }
};