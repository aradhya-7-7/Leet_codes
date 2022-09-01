class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
        int n=candies.size();
        int l=candies[0];
       for(int i=1;i<n;i++)
       {
           if(candies[i]>l)
               l=candies[i];
       }
        
        vector<bool> result(n);
        
       for(int i=0;i<n;i++)
       {
           if((candies[i]+extraCandies)>=l)
           {
               result[i] = true;
           }
           
           else
           {
               result[i]=false;
           }
       }
        
        return result;
    }
};