class Solution {
public:
    int trap(vector<int>& nums) {
        int n = nums.size();

        int left_max = 0;
        int right_max = 0;

        int left = 0;
        int right = n - 1;

        int trapped_water = 0;

        while (left <= right) {

            if (nums[left] < nums[right]) {

                if (nums[left] >= left_max) {
                    left_max = nums[left];
                }
                else {
                    trapped_water += left_max - nums[left];
                }

                left++;
            }
            else {

                if (nums[right] >= right_max) {
                    right_max = nums[right];
                }
                else {
                    trapped_water += right_max - nums[right];
                }

                right--;
            }
        }

        return trapped_water;
    }
};