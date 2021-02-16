class Solution {
public:
    bool isPalindrome(string s) {
       
       if (s.empty()) return true; 
        int x = s.size();
        int i = 0;
        while (i < x) {
           
            if (!isalnum(s[x])) { x--; continue; }
            if (!isalnum(s[i])) { i++; continue; }   
            if (toupper(s[i++]) != toupper(s[x--])) return false;
        }
        return true;
    }
    
};
