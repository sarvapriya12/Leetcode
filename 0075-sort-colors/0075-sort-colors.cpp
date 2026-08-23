class Solution {
public:
    void sortColors(vector<int>& nums) {
        int s = 0, m = 0, e = nums.size() - 1;

        while(m <= e) {
            switch(nums[m]) {

                case 0:
                    swap(nums[s], nums[m]);
                    s++;
                    m++;
                    break;

                case 1:
                    m++;
                    break;

                case 2:
                    swap(nums[e], nums[m]);
                    e--;
                    break;
            }
        }
    }
};