
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> duplicateChecker;
        for (auto num: nums)
        {
            if (duplicateChecker.find(num) != duplicateChecker.end())
                return true;
            duplicateChecker.insert(num);
        }
        return false;
    }
};