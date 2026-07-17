class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        int maxa = INT_MIN;
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[st.top()] > arr[i]){
                int ele = arr[st.top()];
                st.pop();
                int nse = i;
                int pse = !st.empty()?st.top():-1;
                int area = ele*(nse-pse-1);
                maxa = max(maxa,area);
            }
            st.push(i);
        }
        while(!st.empty()){
            int nse = n;
            int ele = arr[st.top()];
            st.pop();
            int pse = !st.empty()?st.top():-1;
            int area = ele*(nse-pse-1);
            maxa=max(maxa,area);
        }
        return  maxa;
    }
};
