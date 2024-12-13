class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> fqmap;
        for(int i:nums)
        {
            fqmap[i]++;
        }
        int ans=0;
        for(const auto&fq:fqmap)
        {
            if(fq.second > nums.size()/2)
            {
                 ans = fq.first;
                break;
            }
        }
        return ans;
    }
};