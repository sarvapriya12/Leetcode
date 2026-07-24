class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        int bestsum = 0;
        int bestdif = INT_MAX;

        for (int i = 0; i < n - 2; i++) {

            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int l = i + 1;
            int r = n - 1;

            while (l < r) {
                int currsum = nums[i] + nums[l] + nums[r];
                int currdif = abs(target - currsum);

                if (currdif < bestdif) {
                    bestdif = currdif;
                    bestsum = currsum;
                }

                if (currsum < target)
                    l++;
                else if (currsum > target)
                    r--;
                else
                    return target;
            }
        }

        return bestsum;
    }
};