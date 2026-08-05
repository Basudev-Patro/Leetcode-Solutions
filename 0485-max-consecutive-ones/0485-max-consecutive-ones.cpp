class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int max_cnt = 0;

        for(int num : nums){
            if(num == 1){
                count++;
                max_cnt = max(max_cnt,count);
            }
            else if(num == 0){
                count = 0;
            }
        }
        return max_cnt;
    }
};