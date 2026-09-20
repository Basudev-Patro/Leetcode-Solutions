class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int ans = 0;

        for(int i = 0; i < n; i++){
            int rev_deg = 26 - (s[i] - 'a');
            int pos = i + 1;

            ans += rev_deg * pos;
        }
        return ans;
    }
};