class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        priority_queue<pair<int,int>> max_heap;

        for(int i = 0; i < nums.size(); i++){
            max_heap.push({nums[i],i});

            while(max_heap.top().second <= i - k){
                max_heap.pop();
            }
            if(i >= k - 1){
                ans.push_back(max_heap.top().first);
            }
        }
        return ans;
    }
};