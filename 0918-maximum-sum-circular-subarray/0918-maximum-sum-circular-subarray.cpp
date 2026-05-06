class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {

        // Kadane for maximum subarray
        int currentMax = nums[0];
        int maxSum = nums[0];

        // Kadane for minimum subarray
        int currentMin = nums[0];
        int minSum = nums[0];

        // Total sum of array
        int totalSum = nums[0];

        for(int i = 1; i < nums.size(); i++)
        {
            totalSum += nums[i];

            // Normal Kadane:
            // Either start fresh from nums[i]
            // OR extend previous subarray
            currentMax = max(nums[i], currentMax + nums[i]);

            // Update best maximum subarray
            maxSum = max(maxSum, currentMax);

            // Minimum subarray version of Kadane
            currentMin = min(nums[i], currentMin + nums[i]);

            // Update best minimum subarray
            minSum = min(minSum, currentMin);
        }

        // Important edge case:
        // If all numbers are negative,
        // totalSum - minSum becomes 0 (wrong answer)
        if(maxSum < 0)
            return maxSum;

        // Circular sum:
        // total sum - minimum subarray
        int circularSum = totalSum - minSum;

        // Return best of:
        // normal subarray OR circular subarray
        return max(maxSum, circularSum);
    }
};