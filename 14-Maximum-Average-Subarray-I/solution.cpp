class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int windowSum = 0;

        // First window
        for (int i = 0; i < k; i++)
        {
            windowSum += nums[i];
        }

        int maxsum = windowSum;

        // Slide the window
        for (int i = k; i < nums.size(); i++)
        {
            windowSum += nums[i];
            windowSum -= nums[i - k];

            maxsum = max(maxsum, windowSum);
        }

        return (double)maxsum / k;
    }
};