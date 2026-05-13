class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        std::vector<std::vector<string>> result;
        std::unordered_map<string,vector<string>> group;
        
        for(std::string str:strs)
        {
            std::string key = str;
            
            std::sort(key.begin(),key.end());
            group[key].push_back(str);

        }
        for(auto&[key,value] : group)
        {
            result.push_back(value);
        }
        return result;
    
    }
};
