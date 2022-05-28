// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int shortestPath( int x, int y){ 
        // code here 
        if(x == y){
            return 0;
        }
        int res = 0;
        int minimum = min(x,y);
        int maximum = max(x,y);
        while(minimum != maximum){
            if(maximum % 2 == 0){
                maximum = maximum - (maximum/2);
                res++;
            }
            else{
                maximum = maximum - ((maximum/2)+1);
                res++;
            }
            if(minimum > maximum){
                int temp = maximum;
                maximum = minimum;
                minimum = temp;
            }
        }
        return res;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        Solution ob;
        cout<< ob.shortestPath(x,y) << endl;
    }
    return 0; 
}   // } Driver Code Ends