class Solution {
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N) {
        long long maxSum = 0;
        long long currentSum = 0;

        for (int i = 0; i < K; i++) {
            currentSum += Arr[i];
        }

        maxSum = currentSum;

        for (int i = K; i < N; i++) {
            currentSum = currentSum + Arr[i] - Arr[i - K];
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};