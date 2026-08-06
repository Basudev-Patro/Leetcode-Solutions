class Solution {
public:
    int smallestNumber(int n, int t) {
        int temp = 0;
        int prod = 1;
        for(int i = n; ;i++){
             temp = i;
             prod = 1;

            while(temp > 0){
                int di = temp % 10;
                prod *= di;
                temp /= 10;
            }
            if(prod % t == 0)
            return i;
            
        }
        
    }
};