class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size() == 2) {
            return {0, 1};
        }

        std::unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            if (m.contains(diff)) {
                return { m[diff], i };
            }
            m.insert({ nums[i], i });
        }

        return {};
    }
};
