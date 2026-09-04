class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> right(n);
        right[n - 1] = nums[n - 1];

        for(int i = n - 2; i >= 0; i--){
            right[i] = min(nums[i],right[i + 1]); // suffix minimum
        }

        int maxx = 0;

        for(int i = 0; i < n; i++){
            maxx = max(maxx,nums[i]);
            if(maxx - right[i] <= k){
                return i;
            }
        }
        return -1;
    }
};