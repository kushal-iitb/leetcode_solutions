class Solution {
public:
    map<char,int> m;
    bool cmp(string a,string b){
        for(int i=0; i<a.length(); i++){
            if(m[a[i]]==m[b[i]])
                continue;
            else if(m[a[i]]<m[b[i]])
                return true;
            else
                return false;
        }
        if(a.length()>b.length())
            return false;
        return true;
    }
    bool isAlienSorted(vector<string>& words, string arr) {
        for(int i=0; i<26; i++){
            m[arr[i]]=i;
        }
      int n=words.size();
        for(int i=0; i<n-1; i++){
         if(cmp(words[i],words[i+1])==false)
             return false;
        }
        return true;
    }
};