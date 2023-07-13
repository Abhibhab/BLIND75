class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>vec;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
        
            if(mp.find(target-nums[i])!=mp.end() ){
                vec.push_back(i);
                vec.push_back(mp[target-nums[i]]);
                return vec;


            }
         mp[nums[i]]=i;

               
        }
        return vec;
            
        
    }

        
    
};
