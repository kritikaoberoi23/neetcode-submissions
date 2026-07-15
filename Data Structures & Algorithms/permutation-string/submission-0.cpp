class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();
        unordered_map<char,int> p;
        for(int i=0;i<n;i++){
            p[s1[i]]++;
        }

        int i=0;
        while(i<m){
            int j=i;
            unordered_map<char,int> a;
            while(j<m && j - i < n){
                a[s2[j]]++;
                j++;
            }
            if(p == a) return true;
            i++;
        }
        return false;
    }
};
