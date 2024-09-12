class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int temp = x,revno=0;
        while(temp){
            revno = revno*10 + temp%10;
            temp = temp/10;
        }
        if (x == revno) return true;
        return false;
    }
};