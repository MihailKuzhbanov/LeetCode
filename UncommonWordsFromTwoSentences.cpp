//task 884
//4ms 9.2mb

class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B)
    {
        string AB = A + " " + B, word = "";
        set<string> words1, words2;
        stringstream str(AB);
        while (str >> word)
        {
            if (words1.find(word) == words1.end() && words2.find(word) == words2.end()) words1.insert(word);
            else
            {
                words1.erase(word);
                words2.insert(word);
            }
        }

        return vector<string>(words1.begin(), words1.end());
    }
};
