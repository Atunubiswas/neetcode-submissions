class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();

        int maxNumber = -1;
        for(int i = n - 1; i >= 0; i--) {
            int temp = arr[i];
            arr[i] = maxNumber;
            maxNumber = max(maxNumber, temp);
        }

        return arr;
    }
};