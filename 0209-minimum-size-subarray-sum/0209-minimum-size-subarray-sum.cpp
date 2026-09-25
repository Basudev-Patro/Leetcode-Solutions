class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int min_count = INT_MAX;
        long long sum = 0;

        for(int right = 0; right < nums.size(); right++){
            sum += nums[right];

            while(left <= right && sum >= target){
                min_count = min(min_count , right - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        return min_count == INT_MAX ? 0 : min_count;
    }
};