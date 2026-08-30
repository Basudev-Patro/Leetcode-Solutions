using namespace std;
class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n <= 2){
            return n;
        }
        int minel = 0,maxel = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] < nums[minel]){
                minel = i;
            }
            if(nums[i] > nums[maxel]){
                maxel = i;
            }
        }
        int left = min(minel,maxel);
        int right = max(maxel,minel);

        int front = right + 1;
        int back = n - left;
        int bothside = (left + 1) + ( n - right);
        int minn = min({front,back,bothside});

        return minn;
    }
};