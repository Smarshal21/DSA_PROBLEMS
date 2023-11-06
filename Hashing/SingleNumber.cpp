
//LINK - https://leetcode.com/problems/single-number/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        int sam =0;

        for(int i=0;i<nums.size();i++){
              mp[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++){
             if(mp[nums[i]]<=1){
                 sam = nums[i];
             }
        }
        return sam;

    }
};