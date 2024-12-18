class Solution {
public:
    int pivotPoint(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            
            if (mid < end && nums[mid] > nums[mid + 1]) {
                return mid;
            }
            if (mid > start && nums[mid] < nums[mid - 1]) {
                return mid - 1;
            }

           
            if (nums[start] <= nums[mid]) { 
                start = mid + 1;
            } else { 
                end = mid - 1;
            }
        }
        return -1; 
    }
    int findMin(vector<int>& nums) {
        int pivot = pivotPoint(nums);
        if(pivot==-1)
        return nums[0];
        else
        return nums[pivot+1];

    }
};