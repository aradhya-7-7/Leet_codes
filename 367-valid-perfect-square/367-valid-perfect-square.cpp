class Solution {
public:
    bool isPerfectSquare(int num)
    {
        double sr=sqrt(num);
        int i=floor(sr);
        return (sr-i==0.0);
    }
};