class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i{};
        std::unordered_map<int,int> seen;
        //target-num if it in map than 
        
        for(i=0;i<nums.size();i++)
        {
            int need = target-nums[i];
            auto it = seen.find(need);
            if( it != seen.end() )
            {

                return {seen[need],i};
            }
            seen[nums[i]] = i;
        }
        return{};
    }
};
