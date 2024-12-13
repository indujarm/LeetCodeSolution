class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int k=0;
        int n=nums.size();
        for(i=0;i<n;i++)
        {
            if(nums[i]!=nums[k])
            {
                k++;
                nums[k]=nums[i];
            }
        }
        return k;
        
    }
};