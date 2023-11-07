class Solution {
public:
    string numRabbits(vector<int>& answers) {
        unordered_map<int, int> mp;
        string ans;
        for (int i = 0; i < answers.size(); i++) {
            mp[answers[i]]++;
        }
        for (auto it = mp.begin(); it != mp.end(); it++) {
            int value = it->first;
            int count = it->second;
            ans += to_string(count) + to_string(value);
        }
        return ans;
    }
};
