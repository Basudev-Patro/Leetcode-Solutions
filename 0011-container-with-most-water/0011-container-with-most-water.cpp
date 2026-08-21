class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int count = 0;

        while(i < j){
            int curr_area = min(height[i],height[j])  * (j - i);
            count = max(count,curr_area);

            if(height[i] < height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return count;
    }
};