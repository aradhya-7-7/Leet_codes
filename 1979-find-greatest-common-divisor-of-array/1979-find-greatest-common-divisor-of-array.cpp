class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
        
        int s=nums[0];
      for(int i=0;i<nums.size();i++)
      {
          if(s>nums[i])
              s=nums[i];
      }
        
       int l=nums[0];
      for(int i=0;i<nums.size();i++)
      {
          if(l<nums[i])
              l=nums[i];
      }
        return gcd(s,l);
    }
    
    int gcd(int a,int b)
    {
        if(b==0)
            return a;
        else
            return gcd(b,a%b);
    }
};