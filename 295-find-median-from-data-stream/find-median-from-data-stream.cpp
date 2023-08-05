// class MedianFinder {
// public:
// priority_queue<int> maxh;
//  double ans = 0.0;
//  int sum = 0;
//     MedianFinder() {
       
//     }
    
//     void addNum(int num) {
//            maxh.push(num);
//     }
//     int n = maxh.size();
    
//     double findMedian() {
//         if (maxh.size()%2!=0){
//             while(maxh.size()==(n/2 + 1)){
//                 maxh.pop();
//             }
//              sum = maxh.top();
//             ans = sum;
//         }
//         else if(maxh.size()%2==0){
//             while(maxh.size()==(n/2 + 1)){
//                 maxh.pop();
//             }
//              sum = maxh.top();
//             maxh.pop();
//             sum = sum + maxh.top();
//              ans = sum/2.0;
//         }
//         return ans;
//         }

//     };
// };

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
class MedianFinder {
public:
    priority_queue<int> maxh; // Max heap for the lower half of numbers
    priority_queue<int, vector<int>, greater<int>> minh; // Min heap for the upper half of numbers

    MedianFinder() {
       
    }
    
    void addNum(int num) {
        if (maxh.empty() || num <= maxh.top())
            maxh.push(num);
        else
            minh.push(num);
        
        if (maxh.size() > minh.size() + 1) {
            minh.push(maxh.top());
            maxh.pop();
        } else if (minh.size() > maxh.size()) {
            maxh.push(minh.top());
            minh.pop();
        }
    }
    
    double findMedian() {
        if (maxh.size() == minh.size())
            return (maxh.top() + minh.top()) / 2.0;
        else
            return maxh.top();
    }
};
