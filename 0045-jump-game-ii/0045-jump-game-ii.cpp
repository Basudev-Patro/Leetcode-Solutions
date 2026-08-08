class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int max_count = 0;
        int prev = 0;
        if(n <= 1){
            return 0;
        }

        for(int i = 0; i < n; i++){
           max_count = max(max_count,i + nums[i]);
           if(i == prev){
            count++;
            prev = max_count;
           }
           if(prev >= n - 1){
            break;
           }
        }
        return count;
    }
};