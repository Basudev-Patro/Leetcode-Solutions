class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int max_product = INT_MIN;
        int prifix = 1;
        int sufix = 1;
        int n = nums.size();

        for(int i = 0; i < n; i++){
            if(prifix == 0) prifix = 1;
            if(sufix == 0) sufix = 1;

            prifix *= nums[i];
            sufix *= nums[n - i - 1];
            max_product = max(max_product,max(prifix,sufix));
        }
        return max_product;
        
    }
};