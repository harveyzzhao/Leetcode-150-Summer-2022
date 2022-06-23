class Solution {
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())   return false;

        std::unordered_map<char, int> anagramChecker;
        for (auto ch : s)
        {
            auto it = anagramChecker.find(ch);
            if (it != anagramChecker.end()) (it->second)++;
            else    anagramChecker.insert(make_pair(ch, 1));
        }
        
        for (auto ch : t)
        {
            auto it = anagramChecker.find(ch);
            if (it == anagramChecker.end())  return false;
            else if (anagramChecker[ch] <= 0)   return false;
            else    anagramChecker[ch]--;
        }
        return true;
    }
};