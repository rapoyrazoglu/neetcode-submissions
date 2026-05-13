class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> num_s;

        for(int num:nums)
        {
            if(num_s.contains(num)) return true;
            num_s.insert(num);
        }

        return false;
    }
};