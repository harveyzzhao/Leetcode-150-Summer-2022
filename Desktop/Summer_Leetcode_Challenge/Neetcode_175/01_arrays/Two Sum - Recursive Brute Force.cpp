class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        return twoSumHelper(nums, target, 0, 1);
    }
    
    vector<int> twoSumHelper(vector<int>& nums, int target, int front, int back)
    {
        if (front >= nums.size() - 1)   return vector<int> {-1, -1};
        else if (back >= nums.size())
        {
            front++;
            back = front + 1;
        }
        if (nums.at(front) + nums.at(back) == target)
        {
            return vector<int> {front, back};
        }
        return twoSumHelper(nums, target, front, back + 1);
    }
};