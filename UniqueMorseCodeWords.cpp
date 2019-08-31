//task 804
//4ms 8.8mb

//using set structure - slower, but ordered input, all elements are unique
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words)
    {
        string table[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        string temp("");
        set<string> morse;

        for (auto el : words)
        {
            for (int i = 0; i < el.size(); i++)
            {
                temp += table[el[i] - 'a'];
            }
            morse.insert(temp);
            temp = "";
        }

        return (words.size() > 1) ? morse.size() : words.size();
    }
};

//using vector structure - faster, but unordered input, contain same elements
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words)
    {
        string table[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};

        string temp("");
        int result(1);
        vector<string> morse;

        for (auto el : words)
        {
            for (int i = 0; i < el.size(); i++)
            {
                temp += table[el[i] - 'a'];
            }
            morse.push_back(temp);
            temp = "";
        }

        for (int i = 1; i < morse.size(); i++)
        {
            int j = 0;
            while (j < i)
            {
                if (morse[i] != morse[j]) j++;
                else break;
            }
            if (i==j) result ++;
        }

        return (words.size() > 1) ? result : words.size();
    }
};
