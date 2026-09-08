class Solution {
public:
    int trap(vector<int>& height) {
        int count = 0;
        int i = 0;
        int j = height.size() - 1;
        int left_max = height[i];
        int right_max = height[j];

        while(i < j){
            if(left_max < right_max){
                i++;
                left_max = max(left_max,height[i]);
                count += left_max - height[i];

            }
            else{
                j--;
                right_max = max(right_max,height[j]);
                count += right_max - height[j];
            }
        }
        return count;
    }
};