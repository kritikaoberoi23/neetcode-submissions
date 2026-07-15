class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int i =0;
        int j=0;
        int maxl = 0;
        while(i<n){
            while(count(s.begin()+i , s.begin()+j,s[j]) == 0 && j<n){
                j++;
            }
            maxl = max(maxl,j-i);
            i++;
            j = i;

        }
        return maxl;
    }
};
