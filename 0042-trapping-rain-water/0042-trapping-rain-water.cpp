class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int left_max = height[left];
        int right_max = height[right];
        int count = 0;

        while(left < right){
            if(left_max < right_max){
                left++;
                left_max = max(left_max,height[left]);
                count += left_max - height[left];
            }
            else{
                right--;
                right_max = max(right_max,height[right]);
                count += right_max - height[right];
            }
        }
        return count;
    }
};