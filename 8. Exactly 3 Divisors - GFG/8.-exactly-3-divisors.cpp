// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    
    bool isPrime(int n) {
  assert(n > 0);
  if(n <= 3) return n > 1;
  if(n % 2 == 0 || n % 3 == 0) return false;
  for(int i = 5; i*i <= n; i += 6)
    if(n % i == 0 || n % (i + 2) == 0)
      return false;
  return true;
}
    
    int exactly3Divisors(int N)
    {
        //Your code here
        if(N <= 3) return 0;
        int count = 0;
        for(int i = 2; i*i <= N; ++i)
        if(isPrime(i))
        ++count;
        return count;
    }
};

// { Driver Code Starts.


int main()
 {
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling function exactly3Divisors()
        cout<<ob.exactly3Divisors(N)<<endl;
    }
	return 0;
}  // } Driver Code Ends