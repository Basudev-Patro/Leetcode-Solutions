class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        long long product = 1;
        int left = 0;
        int max_count = 0;
        if(k <= 1) return 0;


        for(int right = 0; right < nums.size(); right++){
            if(right == 0 && nums[right] >= k){
                right++,left++;
            }
            product *= nums[right];

            while(product >= k){
                product /= nums[left];  
                left++;
            }
            max_count += right - left + 1;
        }
        return max_count;
    }
};