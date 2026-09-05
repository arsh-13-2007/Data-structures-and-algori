class Solution {
public:

    void merge(int start, int mid, int end, vector<int>& nums) {

        vector<int> brr;
        
        int i = start;
        int j = mid + 1;

        while (i <= mid && j <= end) {

            if (nums[i] <= nums[j]) {
                brr.push_back(nums[i]);
                i++;
            }
            else {
                brr.push_back(nums[j]);
                j++;
            }
        }
        while (i <= mid) {
            brr.push_back(nums[i]);
            i++;
        }

        while (j <= end) {
            brr.push_back(nums[j]);
            j++;
        }
        for (int x = 0; x < brr.size(); x++) {
            nums[start + x] = brr[x];
        }
    }
    void merge_sort(int start, int end, vector<int>& nums) {
        if (start >= end) {
            return;
        }
        int mid = start + (end - start) / 2;
        merge_sort(start, mid, nums);
        merge_sort(mid + 1, end, nums);
        merge(start, mid, end, nums);
    }

    vector<int> sortArray(vector<int>& nums) {

        merge_sort(0, nums.size() - 1, nums);

        return nums;
    }
};