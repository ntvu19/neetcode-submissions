class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int length = nums.size();
        std::set<int> unique_els;

        for (int i = 0; i < length; i++) {
            if (unique_els.contains(nums[i])) {
                return true;
            }
            unique_els.insert(nums[i]);
        }

        return false;
    }
};