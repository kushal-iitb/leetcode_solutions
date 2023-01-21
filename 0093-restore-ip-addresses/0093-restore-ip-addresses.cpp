class Solution {
public:
      bool isvalid(string temp){
      if(temp.size()==0 || temp.size()>3)
        return false;
      if(temp.size()>1 && temp[0]=='0')
        return false;
        if(temp.size() && stoi(temp)>255)
          return false;
        return true;
    }
    void helper(string s,vector<string> &ans,int i,int k,string temp){
      if(k>3)
        return;
        if(k==3 && isvalid(s.substr(i)))
            ans.push_back(temp+s.substr(i));
        for(int j=i; j<s.length(); j++){
         if(isvalid(s.substr(i,j-i+1))){
          temp.push_back(s[j]);
          temp.push_back('.');
          helper(s,ans,j+1,k+1,temp);
          temp.pop_back();
         }
                
        }
    }
    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
        if(s.size() <4|| s.size()>12)
          return ans;
        string temp="";
        helper(s,ans,0,0,temp);
        return ans;
    }
};