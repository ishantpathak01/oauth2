class Solution {
public:
    string countAndSay(int n) {
     if(n==1)
        return "1";
        string s="1";
     for(int i=2;i<=n;i++){
        int count=1;
        string next="";
        for(int j=1;j<s.size();j++){
            if(s[j]==s[j-1]){
                count++;
            }
            else{
                next+=to_string(count)+s[j-1];
                count=1;
            }
        }
         next += to_string(count) + s.back();
      s=next;
     }
      return s;
    }
};
