
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();

        bool increasing = true;
        bool decreasing = true;

        for (int i = 0; i < n; i++) {
            if (nums[i] != (i + nums[0]) % n)
                increasing = false;

            if (nums[i] != (nums[0] - i + n) % n)
                decreasing = false;
        }

        if (increasing) {
            int k = nums[0];
            return min((n - k) % n, k + 2);
        }

        if (decreasing) {
            int k = nums[0];
            return min(n - k, k + 2);
        }

        return -1;
    }
};
