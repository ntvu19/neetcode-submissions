class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.size() == 2) {
            return {0, 1};
        }
        
        std::unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); i++) {
            m.insert({nums[i], i});
        }

        std::pair<bool, int> duplicated = { false, 0 };
        for (const auto& [num, idx] : m) {
            if (m.contains(target - num)) {
                if (m[target - num] != idx) {
                    auto [i, j] = std::minmax(m[target - num], idx);
                    return {i, j};
                } else {
                    duplicated = { true, target - num };
                }
            }
        }

        if (duplicated.first) {
            int a = 0, b = 0;
            bool found = false;
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == duplicated.second) {
                    if (found == true) {
                        b = i;
                    } else {
                        a = i;
                        found = true;
                    }
                }
            }
            return {a, b};
        }

        return {0, 1};
    }
};
