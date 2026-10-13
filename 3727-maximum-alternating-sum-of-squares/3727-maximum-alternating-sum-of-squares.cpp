class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector <long long> sq(n);
        for(int i = 0; i < n; i++){
            sq[i] = (long long) nums[i] * nums[i];
        }
        sort(sq.begin(),sq.end());

        long long total_sum = 0;
        int mid = n / 2;

        for(int i = 0; i < n; i++){
            if(i < mid){
                total_sum -= sq[i];
            }
            else{
                total_sum += sq[i];
            }

        }
        return total_sum;
    }
};