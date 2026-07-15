class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i=0;
        int j=n-1;
        int maxp = 0;
        while(i<n-1){
            int maxi = 0;
            int t = i+1;
            while(t<=j){
                maxi = max(maxi,prices[t]);
                t++;
            }
            if(prices[i] < maxi){
                maxp = max(maxp , (maxi - prices[i]));
            }
            i++;
        }
        return maxp;
    }
};
