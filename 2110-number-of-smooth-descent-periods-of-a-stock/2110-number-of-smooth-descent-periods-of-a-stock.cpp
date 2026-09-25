class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long count = 0;
        long long max_count = 0;

        for(int i = 0; i < prices.size();i++){
            if(i == 0 || prices[i] == prices[i - 1] - 1){
                count++;
            }
            else{
                count = 1;
            }
            max_count += count;
        }
        return max_count;
    }
};