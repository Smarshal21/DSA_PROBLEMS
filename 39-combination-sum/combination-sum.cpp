class Solution {
public:
    vector<int> temp;
    void sumtrack(int ind, vector<int>& candidates, int target, int n,
                  vector<vector<int>>& ans) {
        if (ind == n) {
            if (target==0) {
                ans.push_back(temp);
            }
             return;
        }
        if(candidates[ind]<=target){
        temp.push_back(candidates[ind]);
        sumtrack(ind, candidates, target - candidates[ind], n, ans);
        temp.pop_back();
        }
        
        sumtrack(ind + 1, candidates, target, n, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> ans;
        sumtrack(0, candidates, target, n, ans);
        return ans;
    }
};