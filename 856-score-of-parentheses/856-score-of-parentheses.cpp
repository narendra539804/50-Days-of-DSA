class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                st.push(-1);
            }else{
                if(st.top() == -1){
                    st.pop();
                    st.push(1);
                }else{
                    int sum = 0;
                    while(st.top()!=-1){
                        sum += st.top();
                        st.pop();
                    }
                    st.pop();
                    sum = 2*sum;
                    st.push(sum);
                }
            }
        }
        int ans = 0;
        while(st.size()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};