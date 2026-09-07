class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>>maxH;
        int n = score.size();

        for(int i = 0; i < n; i++){
            maxH.push({score[i],i});
        }

        vector<string> res(n);
        int rank = 1;
        while(!maxH.empty()){
            auto [cur_sc,cur_idx] = maxH.top();
            maxH.pop();
            if(rank == 1){
                res[cur_idx] = "Gold Medal";
            }
            else if(rank == 2){
                res[cur_idx] = "Silver Medal";
            }
            else if(rank == 3){
                res[cur_idx] = "Bronze Medal";
            }
            else{
                res[cur_idx] = to_string(rank);
            }
            rank++;
        }
        return res;
    }
};