class Solution {
public:
    int compress(vector<char>& chars) {

        int read = 0;
        int write = 0;
        int n = chars.size();

        while (read < n)
        {
            char current = chars[read];
            int count = 0;

            // Count consecutive characters
            while (read < n && chars[read] == current)
            {
                count++;
                read++;
            }

            // Write the character
            chars[write] = current;
            write++;

            // Write the count if greater than 1
            if (count > 1)
            {
                string countStr = to_string(count);

                for (char c : countStr)
                {
                    chars[write] = c;
                    write++;
                }
            }
        }

        return write;
    }
};