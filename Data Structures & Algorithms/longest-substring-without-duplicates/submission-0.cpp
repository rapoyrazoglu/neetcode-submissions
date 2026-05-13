class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left  = 0;
        int right = 0;
        std::unordered_set<char> window{};
        int max_len{};
        //pwwekw
        for(char c: s){

            while(window.count(c)){
                window.erase(s[left]);
                left++;
            }
            window.insert(c);
            max_len = std::max(max_len,right-left+1);
    right++;
        }


        return max_len;
    }
};
