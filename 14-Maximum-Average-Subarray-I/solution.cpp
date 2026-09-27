class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int windowsum = 0;

        // First window
        for (int i = 0; i < k; i++)
        {
            windowsum += nums[i];
        }

        int maxsum = windowsum;

        // Slide the window
        for (int i = k; i < nums.size(); i++)
        {
            windowsum += nums[i];
            windowsum -= nums[i - k];

            maxsum = max(maxsum, windowSum);
        }

        return (double)maxsum / k;
    }
};