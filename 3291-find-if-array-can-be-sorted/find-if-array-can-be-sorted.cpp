class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        int n = nums.size();
        while (n--) {
            for (int i = 0; i < nums.size() - 1; i++) {
                if (__builtin_popcount(nums[i]) ==
                        __builtin_popcount(nums[i + 1]) &&
                    nums[i] > nums[i + 1]) {
                    swap(nums[i], nums[i + 1]);
                }
            }
        }

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i - 1] > nums[i])
                return false;
        }
        return true;
    }
};
