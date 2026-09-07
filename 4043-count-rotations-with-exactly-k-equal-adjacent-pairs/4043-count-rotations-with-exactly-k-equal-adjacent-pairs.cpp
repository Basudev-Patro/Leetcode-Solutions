class Solution {
public:
    int countRotations(string s, int k) {
        int total_count = 0;
        int n = s.size();

        for(int i = 0; i < n; i++){
            int count = 0;
            for(int j = 0; j < n - 1; j++){
               char cur_char = s[(i + j) % n];
               char next_char = s[(i + j + 1) % n];

                if(cur_char == next_char){
                    count++;
                }
            }
            if(count == k){
                total_count++;
            }
        }
        return total_count;
        
    }
    
    
};