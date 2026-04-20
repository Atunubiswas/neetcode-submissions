class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();

        for(int i = 0; i <= n - 1; i++) {
            int maxNumber = -1;
            for(int j = i + 1; j <= n - 1; j++) {
                maxNumber = max(maxNumber, arr[j]);
            }
            arr[i] = maxNumber;
        }

        return arr;
    }
};