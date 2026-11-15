class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> c;
        int len=0;
        int l=0,r=0;
        while(r<s.size()){
            while(c[s[r]]>0){
                c[s[l]]--;
                l++;
            }
            c[s[r]]++;
            len=max(r-l+1,len);
            r++;
        }
        return len;
    }
};