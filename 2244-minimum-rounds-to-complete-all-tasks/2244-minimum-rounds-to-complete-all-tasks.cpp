class Solution {
public:
    int minimumRounds(vector<int>& arr) {
        map<int,int>m;
        for(auto it:arr)
            m[it]++;
        int ans=0;
        for(auto it:m){
            if(it.second==1){
                return -1;
            }
            else if(it.second%3){
                ans+=(it.second/3)+1;
            }
            else{
                ans+=(it.second/3);
            }
        }
        return ans;
    }    
};