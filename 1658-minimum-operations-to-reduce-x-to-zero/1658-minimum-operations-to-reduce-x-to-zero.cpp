class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total = accumulate(nums.begin(),nums.end(),0);
        int sum = 0;
        int left = 0;
        int target = total - x;
        int maxlen = -1;
        if(target < 0) return - 1;
        if(target == 0) return nums.size();

        for(int right = 0; right < nums.size(); right++){
            sum += nums[right];
            while(left <= right && sum > target){
                sum -= nums[left];
                left++;
            }
            if(sum == target)
                maxlen = max(maxlen,right - left + 1);
            
        }
        if(maxlen == - 1) return -1;
        return nums.size() - maxlen;
    }
};