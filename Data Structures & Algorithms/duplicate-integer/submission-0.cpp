class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int, int> d;
        for(int i = 0; i < nums.size(); i++)
        {
            if(d[nums[i]] >= 1)
                return true;
            else 
            {
                d[nums[i]] = 1;
            }
        }

        return false;
    }
};