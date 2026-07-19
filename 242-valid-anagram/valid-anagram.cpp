class Solution {
public:
    bool isAnagram(string s, string t) {
       int s1=s.length();
       int s2=t.length();
       if(s1!=s2)
        return false;
        
        int arr[26]={0};
        for(int i=0;i<s1;i++){
            arr[s[i]-'a']++;}
             for(int i=0;i<s2;i++){
            arr[t[i]-'a']--;
            if(arr[t[i]-'a']<0){
            return false;}
        }
        return true;
    }

};