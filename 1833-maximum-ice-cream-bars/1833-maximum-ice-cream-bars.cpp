class Solution {
public:
    int maxIceCream(vector<int>& arr, int coins) {
        sort(arr.begin(),arr.end());
        int ans=0;
        for(auto it:arr){
            if(it>coins){
                return ans;
            }
            else{
                ans++;
                coins-=it;
            }
        }
        return ans;
    }
};