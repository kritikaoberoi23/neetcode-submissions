class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        int i =0;
        
        vector<int> maxi;
        while(i<=n-k){
            int j = i;
            int ans = INT_MIN;
            while(j-i < k && j<n){
                ans = max(ans , nums[j]);
                j++;
            }
            maxi.push_back(ans);
            i++;
        }
        return maxi;
    }
};
