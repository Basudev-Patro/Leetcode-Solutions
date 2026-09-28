class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        if(cardPoints.size() == k){
            return accumulate(cardPoints.begin(),cardPoints.end(),0);
        }
        long long sum = 0;
        long long max_sc = 0;
        int left = 0;

        for(int i = 0; i < k; i++){
            sum += cardPoints[i];
        }
        max_sc = sum;
        int right = cardPoints.size() - 1;
        for(int i = k - 1; i >= 0; i--){
            sum = sum - cardPoints[i] + cardPoints[right];
            right--;
            max_sc = max(max_sc,sum);
        }
        return max_sc;
    }
};