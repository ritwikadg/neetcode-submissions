class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set numset(nums.begin(),nums.end());
        int res =0;
        for(int num:numset)
        {
            if(numset.find(num-1)==numset.end())
            {
                int streak=1;
                while(numset.find(num+streak)!=numset.end())
                {
                    streak++;
                }
                res=max(res,streak);
            }
        }        
        return res;
    }
};
