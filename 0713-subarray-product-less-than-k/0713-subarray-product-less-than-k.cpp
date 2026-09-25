class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int product = 1;
        int left = 0;
        int max_len = 0;
        if (k <= 1) return 0;

        for(int right = 0; right < nums.size(); right++){
            product *= nums[right];

            while(left <= right && product >= k){
                product /= nums[left];
                left++;
            }
            max_len += right - left + 1;
        }
        return max_len;
    }
};