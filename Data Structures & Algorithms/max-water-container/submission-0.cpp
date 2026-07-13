class Solution {
public:
    int maxArea(vector<int>& height) {
   int ans;
        vector<int> v;
        int maxvol=0;
        int n=height.size();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            int area=(j-i)*min(height[i],height[j]);
            maxvol=max(area,maxvol);
           if(height[i] < height[j])
           {
            i++;
           }
           else{
            j--;
           }
        }
        return maxvol;
    }
};