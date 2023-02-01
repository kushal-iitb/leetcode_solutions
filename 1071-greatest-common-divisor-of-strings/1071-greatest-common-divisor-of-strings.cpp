class Solution {
public:
    int n,m;
    bool ispossible(string p,string q, string temp){
        int l=temp.length();
        int j=0;
        if(n%l || m%l)
            return false;
        for(int i=0; i<n; i++,j++){
                if(p[i]!=temp[j%l])
                    return false;
        }
        for(int i=0; i<m; i++,j++){
                if(q[i]!=temp[j%l])
                    return false;
        }
        return true;
    }
    string gcdOfStrings(string p, string q) {
        if(p>q)
            swap(p,q);
        n=p.length();
        m=q.length();
        string temp="";
        string ans="";
        for(int i=0; i<n; i++){
            temp+=p[i];
            if(ispossible(p,q,temp))
                ans=temp;
        }
        return ans;
    }
};