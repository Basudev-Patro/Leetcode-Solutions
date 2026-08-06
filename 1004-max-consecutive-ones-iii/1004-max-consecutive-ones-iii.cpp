class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0;
        int z_c = 0;
        int max_c = 0;

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
            max_c = max(max_c,i - left + 1);
        }
        return max_c;
    }
};