
// LINK - https://practice.geeksforgeeks.org/problems/in-first-but-second5423/1

class Solution {
public:
    std::vector<long long> findMissing(long long A[], long long B[], int N, int M) {
        std::unordered_map<long long, int> mp;
        std::vector<long long> ans;

        for (int i = 0; i < M; i++) {
            mp[B[i]]++;
        }

        for (int i = 0; i < N; i++) {
            if(mp.find(A[i]) == mp.end()) {
                ans.push_back(A[i]);
            }
        }

        return ans;
    }
};
	