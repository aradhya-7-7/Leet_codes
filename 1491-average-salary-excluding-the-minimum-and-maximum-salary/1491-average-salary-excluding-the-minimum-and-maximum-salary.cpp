class Solution {
public:
    double average(vector<int>& salary)
    {
        int s=INT_MAX;
        for(int i=0;i<salary.size();i++)
        {
            if(salary[i]<s)
                s=salary[i];
        }
        
        int l=INT_MIN;
        for(int i=0;i<salary.size();i++)
        {
            if(salary[i]>l)
                l=salary[i];
        }
        
        int sum=0;
        for(int i=0;i<salary.size();i++)
        {
            sum=sum+salary[i];
        }
        sum=sum-(s+l);
        
        double avg=sum/((salary.size()-2)*1.0);
        return avg;
    }
};