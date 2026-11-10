class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = s.length()-1; int j = t.length()-1; int sSkip=0, tSkip = 0;
        while (i>=0 || j>= 0){
            while(i>=0 && (s[i] == '#' || sSkip> 0)){
                if(s[i] == '#'){
                    sSkip++; 
                    i--;
                }else{
                    sSkip--; 
                    i--;
                }    
            }
            while(j>=0 && (t[j] == '#' || tSkip> 0)){
                if(t[j] == '#'){
                    tSkip++; 
                    j--;
                }else{
                    tSkip--; 
                    j--;
                }
            }
            if (j<0 && i >= 0){
                return false;
            }
            if (i<0 && j>= 0){
                return false;
            }
            if ( j>= 0 && i>=0 && s[i] != t[j]){
                return false;
            }
            i--;
            j--;
        }
        return true;
    }
};