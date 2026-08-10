class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int fr = INT_MAX;
        int sc = INT_MAX;

        for(int num : nums){
            if(num <= fr){
                fr = num;
            }
            else if(num <= sc){
                sc = num;
            }
            else{
                return true;
            }
        }
        return false;
    }
};