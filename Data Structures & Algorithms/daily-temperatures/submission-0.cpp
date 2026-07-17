class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<int> st;
        int n = temp.size();
        vector<int> ans(n);
        int i=0;
        while(i<n){
            while(!st.empty() && temp[i] > temp[st.top()]){
                int idx = st.top();
                st.pop();
                ans[idx] = i-idx;
            }
            st.push(i);
            i++;
        }
        return ans;
    }
};
