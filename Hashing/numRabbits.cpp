
//Link - https://leetcode.com/problems/rabbits-in-forest/
class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> mp;
        
        int ans = 0;
        for(int i=0;i<answers.size();i++){
             mp[answers[i]]++;
        }
        for(auto i : mp){
            int x = i.first;
            int y = i.second;
            ans += ( (x+1) * (y/(x+1)) );
            if(y%(x+1)) ans += (x+1);
        }

        return ans;

    }
};