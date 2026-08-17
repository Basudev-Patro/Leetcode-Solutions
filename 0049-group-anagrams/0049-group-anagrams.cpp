class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(string s : strs){
            string sorted_key = s;
            sort(sorted_key.begin(),sorted_key.end());
            mp[sorted_key].push_back(s);
        }
        vector<vector<string>> result;
        for(auto &it : mp){
            result.push_back(it.second);
        }
        return result;
    }
};