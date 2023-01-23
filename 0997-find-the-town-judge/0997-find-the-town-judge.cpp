class Solution {
public:
    int findJudge(int n, vector<vector<int>>& arr) {
        if(n==1)
            return 1;
        map<int,int> m;
        vector<bool> visited(n+1,false);
        for(auto it:arr){
            visited[it[0]]=true;
            m[it[0]]++;
              m[it[1]]++;
        }
              for(auto it:m){
                  if(it.second==n-1 && visited[it.first]==false)
                      return it.first;
              }
             
              return -1;
    }
};