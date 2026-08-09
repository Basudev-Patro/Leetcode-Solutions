class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_cnt = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(i > max_cnt){
                return false;
            }
            max_cnt = max(max_cnt,i + nums[i]);
            if(max_cnt >= n - 1){
                return true;
            }
        }
        return true;
    }
};