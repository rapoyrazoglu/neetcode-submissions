class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> seen;
        //target-num if it in map than 
        seen.reserve(nums.size());
        for(int i=0;i<std::ssize(nums);i++)
        {
            int need = target-nums[i];
            auto it = seen.find(need);
            if( it != seen.end() )
            {

                return {it->second,i};
            }
            seen[nums[i]] = i;
        }
        return{};
    }
};
