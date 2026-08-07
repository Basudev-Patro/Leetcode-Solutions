class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int z_c = 0;
        int mx_cnt = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                z_c++;
            }
            while(z_c > k){
                if(nums[left] == 0){
                    z_c--;
                } 
                left++;
            }
            mx_cnt = max(mx_cnt, i - left + 1);
        }
        return mx_cnt;
    }
};