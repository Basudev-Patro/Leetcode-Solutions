class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> st;
        int mn = INT_MAX;
        int mx = INT_MIN;

        for(int num : nums){
            mn = min(mn,num);
            mx = max(mx,num);

            st.insert(num);
        }

        vector<int> ans;
        for(int i = mn + 1; i < mx; i++){
            if(!st.count(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};