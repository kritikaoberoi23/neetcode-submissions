class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int n = numbers.size();
        int i=0,j=n-1;
        while(i<j){
            while( i<j && numbers[i]+numbers[j] > target) j--;
            while(i<j && numbers[i]+numbers[j] < target) i++;

            if(numbers[i] +  numbers[j] == target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
        }
        return {-1,-1};
    }
};
