class Solution {
public:
    int minElement(vector<int>& nums) {
        int minn = nums[0];
        for(int i : nums){
            int digit_sum = 0;

            while(i > 0){
                int temp = i % 10;
                digit_sum += temp;
                i /= 10;
            }

            minn = min(minn,digit_sum);
        }
        return minn;
    }
};