class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        
        std::array<int,26> seen{};

        for(char c:s) seen[c-'a']++;
        for(char c:t) {
            seen[c-'a']--;
            if(seen[c-'a']<0) return false;
        }



      return true;  
    }
};
