class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> temp;

        for(string str : strs){
            string sorted_key = str;
            sort(sorted_key.begin(),sorted_key.end());
            temp[sorted_key].push_back(str);
        }
        vector<vector<string>> ans;

        for(auto it : temp){
            ans.push_back(it.second);
        }
        return ans;

    }
};