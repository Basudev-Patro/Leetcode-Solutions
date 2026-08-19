class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        int r_sum = 0;
        int l_sum = 0;
        for(int x : nums){
            r_sum += x;
        }
        vector<int>ans(nums.size());

        for(int i = 0;i < n ; i ++){
            r_sum -= nums[i];
            ans[i] = abs(l_sum - r_sum);
            l_sum += nums[i];
        }
        return ans;
    }
};