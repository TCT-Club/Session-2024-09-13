class Solution {
public:
    void reverseString(vector<char>& s) {
        // reverse(s.begin(), s.end());
        char temp;
        int i=0, j=s.size()-1;
        while(i<j){
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            i++, j--;
        }
    }
};