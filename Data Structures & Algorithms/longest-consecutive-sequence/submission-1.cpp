class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            int s , freq=0;
            if(mp.find(nums[i]-1) == mp.end()){
                s = nums[i];
                freq = 1;
            
            while(mp.find(s+1) != mp.end())
            {
                   freq++;
                   s++;
            }
            }

            ans=max(ans,freq);
        }
        return ans;
    }
};
