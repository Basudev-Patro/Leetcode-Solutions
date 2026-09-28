class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0;
        int left = 0;
        int max_len = 0;

        for(int right = 0; right < k; right++){
            if(s[right] == 'a' || s[right] == 'e' || s[right] == 'i' || s[right] == 'o' || s[right] == 'u'){
                count++;
            }
        }
        max_len = count;

        for(int right = k; right < s.size(); right++){
            if(s[right] == 'a' || s[right] == 'e' || s[right] == 'i' || s[right] == 'o' || s[right] == 'u'){
                count++;
            }
            if(s[left] == 'a' || s[left] == 'e' || s[left] == 'i' || s[left] == 'o' || s[left] == 'u'){
                count--;
            }
            left++;
            max_len = max(max_len,count);
        }
        return max_len;
            
    }
};