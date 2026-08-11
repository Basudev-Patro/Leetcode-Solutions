class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int prifix_sum = nums[0];

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i - 1] + 1){
                prifix_sum += nums[i];
            }
            else{
                break;
            }
        }
        unordered_set<int> n(nums.begin(),nums.end());
        while(n.count(prifix_sum)){
            prifix_sum++;
        }
        return prifix_sum;
    }
};