//task 28
//1288ms 9.0mb

//manual, not used string functions
class Solution {
public:
    int strStr(string haystack, string needle)
    {
        bool ok(false);
        if (needle.length() == 0) return 0;
        for (int i = 0; i< haystack.length(); i++)
        {
            if (needle[0] == haystack[i])
            {
                ok = true;
                for (int j = 0; j < needle.length(); j++)
                {
                    if (needle[j] != haystack[i+j])
                    {
                        ok = false;
                        break;
                    }
                }
            }
            if (ok) return i;
        }
        return -1;
    }
};

//also you can use substr()
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.size() == 0) return 0;
        for(int i = 0; i < haystack.size(); i++)
            if(haystack[i] == needle[0] && isEqual(haystack.substr(i), needle)) return i;
        return -1;
    }

    bool isEqual(string s1, string s2){
        if(s1.size() < s2.size()) return false;
        for(int i = 0; i < s2.size(); i++)
            if(s1[i] != s2[i]) return false;
        return true;
    }
};

//whynot ?
class Solution {
public:
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
};
