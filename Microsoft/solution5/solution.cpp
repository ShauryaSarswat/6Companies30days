class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> dp(n, 1);
        vector<int> parent(n, -1);
        int max_index = 0;
        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] % nums[j] == 0 && dp[i] < dp[j] + 1) {
                    dp[i] = dp[j] + 1;
                    parent[i] = j;
                }
            }
            if (dp[max_index] < dp[i]) {
                max_index = i;
            }
        }
        vector<int> result;
        int i = max_index;
        while (i >= 0) {
            result.push_back(nums[i]);
            i = parent[i];
        }
        return result;
    }
};