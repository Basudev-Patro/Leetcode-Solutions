class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> charset;
        int left = 0;
        int max_length = 0;

        for(int right = 0; right < s.size(); right++){
            while(charset.count(s[right])){
                charset.erase(s[left]);
                left++;
            }
            charset.insert(s[right]);
                max_length = max(max_length,right - left + 1);
            }
        
        return max_length;
     }
};