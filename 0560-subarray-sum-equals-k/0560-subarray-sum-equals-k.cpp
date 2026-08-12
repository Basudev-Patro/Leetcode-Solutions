class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int prefix_sum = 0;

        unordered_map<int,int> mpp;
        mpp[0] = 1;

        for(int i = 0; i < nums.size(); i++){
            prefix_sum += nums[i];
            int find = prefix_sum - k;
            count += mpp[find];
            mpp[prefix_sum] += 1;
        }
        return count;
        
    }
};