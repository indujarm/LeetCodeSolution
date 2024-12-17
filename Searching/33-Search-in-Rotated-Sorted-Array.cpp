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

    int binarySearch(vector<int>& nums, int start, int end, int target) {
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target) {
                return mid;
            }
            if (nums[mid] > target) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return -1; 
    }

    int search(vector<int>& nums, int target) {
        int pivot = pivotPoint(nums);

        if (pivot == -1) {
            return binarySearch(nums, 0, nums.size() - 1, target);
        }

        if (nums[pivot] == target) {
            return pivot;
        }

        if (target >= nums[0]) {
            return binarySearch(nums, 0, pivot, target);
        }

        return binarySearch(nums, pivot + 1, nums.size() - 1, target);
    }
};