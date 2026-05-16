class Solution {
public:
/*
    Time complexity : O(n^2)
    Space complexity : O(1)
*/

    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();

        for(int i = 0; i <= n - 1; i++) {
            for(int j = i + 1; j <= n - 1; j++) {
                if(arr[i] + arr[j] == target) {
                    return {i, j};
                }
            }
        }

        return {-1, -1};
    }
};
