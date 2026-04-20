class Solution {
public:
    bool hasDuplicate(vector<int>& arr) {
        int n = arr.size();

        unordered_map<int, int> storeMap;
        for(int i = 0; i <= n - 1; i++) {
            if(storeMap.find(arr[i]) != storeMap.end()) {
                return true;
            }
            storeMap[arr[i]] = 1;
        }

        return false;
    }
};