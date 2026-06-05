class Solution {
public:
    bool isPalindrome(string s) {
        string lcase="";
        string reversed ="";
        for(char c:s){
            if(isalnum(c)) lcase+=tolower(c);
        }
        int n = lcase.length();
        for(int i=n-1;i>=0;i--){
            reversed+=lcase[i];
        }
        return lcase==reversed;
    }
};
