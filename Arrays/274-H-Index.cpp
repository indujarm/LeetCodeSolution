class Solution {
public:
    int hIndex(vector<int>& count) {
    
        int n= count.size();
        sort(count.begin(),count.end());
        int index=0;
        int i;
        for( i=1;i<=n;i++)
        {
            if(count[n-i]<i)
            {
                break;
            }
        }
        return i-1;
    }
};