class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max_sum = 0;
        int left = 0;
        double sum = 0;

        for(int right = 0; right < k; right++){
            sum += nums[right];
        }
        max_sum = sum;
        for(int right = k; right < nums.size(); right++){
            sum = sum + nums[right] - nums[right - k];
            max_sum = max(max_sum , sum);
        }
        return max_sum / k;
    }
};