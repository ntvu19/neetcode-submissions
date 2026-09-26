class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length = nums.size();
        if (length == 2) {
            return {0, 1};
        }

        std::unordered_map<int, int> m;
        for (int i = 0; i < length; i++) {
            int diff = target - nums[i];
            if (m.contains(diff)) {
                return { m[diff], i };
            }
            m.insert({ nums[i], i });
        }

        return {};
    }
};
