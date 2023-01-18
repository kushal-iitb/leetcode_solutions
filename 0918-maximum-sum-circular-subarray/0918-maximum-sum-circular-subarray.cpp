class Solution {
public:
    int maxSubarraySumCircular(vector<int>& arr) {
        int n=arr.size();
        int maxend=arr[0];
        int ans1=arr[0];
        int sum=arr[0];
        for(int i=1; i<n; i++){
            sum+=arr[i];
            maxend=max(maxend+arr[i],arr[i]);
            ans1=max(ans1,maxend);
        }
        if(ans1<0)
            return ans1;
        int minend=arr[0];
        int ans2=arr[0];
        for(int i=1; i<n; i++){
             minend=min(arr[i]+minend,arr[i]);
             ans2=min(minend,ans2);
        }
        ans2=sum-ans2;
        return max(ans1,ans2);
    }
};