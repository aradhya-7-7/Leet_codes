class Solution {
public:
    bool isSameAfterReversals(int num)
    {
    if(num>=0&&num<=9)
        return true;
    else
        return(num%10!=0);
    }
};