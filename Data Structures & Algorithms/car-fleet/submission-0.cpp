class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,double>> pos;
        for(int i=0;i<n;i++){
            double t = (double)(target-position[i])/speed[i];
            pos.push_back({position[i],t});
        }
        sort(pos.rbegin(),pos.rend());
        stack<double> st;
        for(auto i:pos){
            double t = i.second;
            int p = i.first;
            if(st.empty() || t>st.top()){
                st.push(t);
            }
        }
        return st.size();
    }
};
