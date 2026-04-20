class Solution {
public:
    bool hasDuplicate(vector<int>& arr) {
        int n = arr.size();

        unordered_set<int> st;
        for(int i = 0; i <= n - 1; i++) {
            st.insert(arr[i]);
        }

        return st.size() == n ? false : true;
    }
};