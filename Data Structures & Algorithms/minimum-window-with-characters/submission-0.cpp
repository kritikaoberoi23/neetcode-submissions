class Solution {
public:
    string minWindow(string s, string t) {
        int m = t.length();
        int n = s.length();
        unordered_map<char,int> mp;
        for(int i=0;i<m;i++){
            mp[t[i]]++;
        }
        int miniL = INT_MAX;
        int si = -1;
        int cnt = 0;
        int r=0,l=0;
        while(r<n){
            if(mp[s[r]] > 0){
                cnt++;
            }
            mp[s[r]]--;
            
            while(cnt == m){
                if(r-l+1 < miniL){
                    miniL = r-l+1;
                    si = l;
                }
                mp[s[l]]++;
                if(mp[s[l]] > 0) cnt--;
                l++;
            }
            r = r+1;
        }
        return si == -1? "":s.substr(si,miniL);
    }
};
