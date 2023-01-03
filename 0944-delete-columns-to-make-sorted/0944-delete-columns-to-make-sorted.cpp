class Solution {
public:
    int minDeletionSize(vector<string>& arr) {
        int ans=0;
        int n=arr.size();
        int m=arr[0].length();
        for(int i=0; i<m; i++){
            for(int j=1; j<n; j++){
                if(arr[j-1][i]>arr[j][i]){
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};