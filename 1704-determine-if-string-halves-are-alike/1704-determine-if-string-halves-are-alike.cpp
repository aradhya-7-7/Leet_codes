class Solution {
public:
    bool halvesAreAlike(string s)
    {
        int n=s.size();
        int a=0;
        int b=0;
        for(int i=0;i<n/2;i++)
        {
            char ch=s[i];
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                a++;
        }
        
        for(int i=n/2;i<n;i++)
        {
            char ch=s[i];
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                b++;
        }
        
        return(a==b);
    }
};