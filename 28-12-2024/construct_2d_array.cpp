class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> arr;
        vector<int> temp(n);
        if (m * n == original.size()) {
            for (int i = 0; i < original.size(); i++) {
                temp[i % n] = original[i];
                if (i % n == (n - 1))
                    arr.push_back(temp);
            }
        }
        return arr;
    }
};