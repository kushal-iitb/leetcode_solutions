class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
    vector<int> f(k);
        f[0]=1;
        int prefix=0,ans=0;
        for(int i=0; i<nums.size(); i++){
            prefix= (prefix+(nums[i]%k)+k)%k;
            ans+=f[prefix]++;
        }
        return ans;
    }
};