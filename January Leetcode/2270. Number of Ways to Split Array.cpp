class Solution {
public:
  int waysToSplitArray(vector<int>& nums) {
    long long totalSum = 0, prefixSum = 0;
    int count = 0;

    for (int num : nums) {
      totalSum += num;
    }

    for (int i = 0; i < nums.size() - 1; ++i) {
      prefixSum += nums[i];
      if (prefixSum >= totalSum - prefixSum) {
        ++count;
      }
    }

    return count;
  }
};
