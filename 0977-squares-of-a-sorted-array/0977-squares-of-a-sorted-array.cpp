class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());
        int i = 0;
        int j = nums.size() - 1;
        int k = nums.size() - 1;
        while(i <= j){
            int sq1 = nums[i] * nums[i];
            int sq2 = nums[j] * nums[j];
            if(sq1 > sq2){
                res[k] = sq1;
                k -= 1;
                i += 1;
            }
            else{
                res[k] = sq2;
                k -= 1; 
                j -= 1;
            }
        }
       return res; 
    }
};