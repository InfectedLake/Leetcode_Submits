class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      set<int> d;
        for(int i : nums)
        {
            if(d.count(i) >= 1)
                return true;
            else d.insert(i);
        }

        return false;
    }
};