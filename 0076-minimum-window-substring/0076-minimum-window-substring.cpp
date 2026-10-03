class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size() > s.size()){
            return "";
        }
        int min_len = INT_MAX;
        int cnt = 0;
        int l = 0;
        int s_idx = -1;
        vector<int> mpp(256,0);

        for(int i = 0; i < t.size(); i++){
            mpp[t[i]]++;
        }
        for(int i = 0; i < s.size(); i++){
            if(mpp[s[i]] > 0){
                cnt++;
            }
            mpp[s[i]]--;

            while(cnt == t.size()){
                if(i - l + 1  < min_len){
                    min_len = i - l + 1;
                    s_idx = l;
                }
                mpp[s[l]]++;
                if(mpp[s[l]] > 0){
                    cnt -= 1;
                }
                l++;

        }
            
        }
        return (s_idx == -1) ? "" : s.substr(s_idx , min_len);
    
    }
};