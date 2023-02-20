class Solution {
public:
    int searchInsert(vector<int>& arr, int k) {
        int l=lower_bound(arr.begin(),arr.end(),k)-arr.begin();
        return l;
    }
};