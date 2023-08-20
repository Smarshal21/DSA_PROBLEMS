//Question Link - https://www.interviewbit.com/problems/sliding-window-maximum/
//Solution - 
#include <bits/stdc++.h>
vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    int i=0,j=0;
    list<int> l;
    vector<int> ans;
    while(j<A.size()){
      //checks if the given element is less than the front element or not if it less if pops the elemnent
        while(l.size()>0 && l.back()<A[j]){
            l.pop_back();
        }
      //if not it adds the element to the back of the list
        l.push_back(A[j]);
        if(j-i+1<B){
            j++;
        }
        else if(j-i+1==B){
            ans.push_back(l.front());
            if(l.front()==A[i]){
                l.pop_front();
            }
            i++;
            j++;
            
        }
       
    }
     return ans;
}
