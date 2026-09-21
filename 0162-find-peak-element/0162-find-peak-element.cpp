class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // int maxx = nums[0];

        // for(int i = 0; i < nums.size(); i++){
        //     if(nums[i] > maxx){
        //         maxx = nums[i];
        //     }
        // }
        // for(int i = 0; i <nums.size(); i++){
        //     if(nums[i] == maxx){
        //         return i;
        //     }
        // }
        // return -1;

        int i = 0;
        int j = nums.size() - 1;
        // if(nums.size() == 1){
        //     return 0;
        // }

        while(i < j){
            int mid = i + (j - i) / 2;
            if(nums[mid] < nums[mid + 1]){
                i = mid + 1;
            }
            else{
                j = mid;
            }
        }
        return j;
    }
};