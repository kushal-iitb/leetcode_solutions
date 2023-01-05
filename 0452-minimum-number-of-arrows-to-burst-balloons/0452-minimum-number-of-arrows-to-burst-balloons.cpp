bool cmp(pair<int,int>& a, pair<int,int>& b) {return a.second < b.second;}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& arr) {
        vector<pair<int,int>> v;
        for(auto it:arr){
            v.push_back({it[0],it[1]});
        }
        int n=arr.size();
        int ans=1;
        sort(v.begin(),v.end(),cmp);
         int p=v[0].second;
        for(int i=1; i<n; i++){
            if(v[i].first<=p && p <=v[i].second){
                continue;
            }
            else{
                ans++;
                p=v[i].second;
            }
        }
        return ans;
    }
};