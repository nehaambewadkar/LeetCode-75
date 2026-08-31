class Solution {
public:
    string reverseWords(string s) {

        stringstream ss(s);
        string word;
        vector<string> words;

        // Store each word
        while (ss >> word)
        {
            words.push_back(word);
        }

        string result = "";

        // Add words in reverse order
        for (int i = words.size() - 1; i >= 0; i--)
        {
            result += words[i];

            if (i != 0)
            {
                result += " ";
            }
        }

        return result;
    }
};