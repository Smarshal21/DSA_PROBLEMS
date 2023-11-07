class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> maxh;
        for(int i=0;i<gifts.size();i++){
            maxh.push(gifts[i]);
        }
        for(int i=0;i<k;i++){
            long long  maxelement = maxh.top();
            maxh.pop();
            long long sqrtele = sqrt(maxelement);
            maxh.push(sqrtele);
        }
         long long sum = 0;
        while(maxh.size()>0){
           
            sum = sum+maxh.top();
            maxh.pop();
        }
        return sum;

    }
};