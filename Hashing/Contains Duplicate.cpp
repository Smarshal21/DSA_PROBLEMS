
//LINK - https://leetcode.com/problems/contains-duplicate/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        bool flag=0;
        for(int i=0;i<nums.size();i++){
               mp[nums[i]]++;
        }
         for(int i=0;i<nums.size();i++){
              if(mp[nums[i]]>1){
                  flag=1;
              }
        }
        if(flag==1){
            return true;
        }else{
            return false;
        }
    }
    
};