class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closest_sum = nums[0] + nums[1] + nums[2];
        

        for(int i = 0; i < nums.size(); i ++){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1;
            int k = nums.size() - 1;

            while(j < k){
                int current_sum = nums[i] + nums[j] + nums[k];
                if(current_sum == target){
                    return current_sum;
                }
                if(abs(current_sum - target) < abs(closest_sum - target)){
                    closest_sum = current_sum;
                }
                if(current_sum < target){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return closest_sum;
    }
};