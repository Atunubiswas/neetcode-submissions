class Solution {
public:
/*
    Time complexity : O(n)
    Space complexity : O(n)
*/

    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        unordered_map<int, int> mpp;

        for(int i = 0; i <= n - 1; i++) {
            int remain = target - arr[i];
            if(mpp.find(remain) != mpp.end()) {
                return {mpp[remain], i};
            }
            mpp[arr[i]] = i;
        }

        return {-1, -1};
    }
};
