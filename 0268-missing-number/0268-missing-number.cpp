class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int curr_sum = 0;
        int total_sum = (n * (n + 1)) * 0.5;

        for(int num : nums){
            curr_sum += num;
        }

        return total_sum - curr_sum;
    }
};