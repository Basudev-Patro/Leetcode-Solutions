class Solution {
public:
    int maxDistinct(string s) {
        int cnt[26] = {0};
        int count = 0;

        for(char c : s){
            if(cnt[c - 'a']++ == 0){
                count++;
            }
        }
        return count;
    }
};