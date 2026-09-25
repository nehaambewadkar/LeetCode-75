class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int left = 0;
        int zeros = 0;
        int maxLength = 0;

        for (int right = 0; right < nums.size(); right++)
        {
            // Add the new element
            if (nums[right] == 0)
            {
                zeros++;
            }

            // Too many zeros → shrink window
            while (zeros > k)
            {
                if (nums[left] == 0)
                {
                    zeros--;
                }

                left++;
            }

            // Current window is valid
            int length = right - left + 1;
            maxlength = max(maxlength, length);
        }

        return maxlength;
    }
};