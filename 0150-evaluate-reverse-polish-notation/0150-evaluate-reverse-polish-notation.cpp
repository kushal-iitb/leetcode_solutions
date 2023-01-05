class Solution {
public:
    int solve(long long a,long long b,string c){
        if(c=="+")
            return a+b;
        if(c=="-")
            return b-a;
        if(c=="*")
            return a*b;
        if(c=="/")
            return b/a;
        return 0;
    }
    int evalRPN(vector<string>& s) {
        stack<long long> st;
        for(auto it:s){
            if(it=="+" || it=="-"|| it=="*" || it=="/"){
                int a=(st.top());
                st.pop();
                int b=(st.top());
                st.pop();
                st.push(solve(a,b,it));
            }
            else{
                st.push(stoi(it));
            }
        }
        return (st.top());
    }
};