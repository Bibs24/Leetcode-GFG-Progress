// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
    string get(int k, int t, string s){
        string res = "";
        while(t--){
            res += s;
        }
        return res;
    }
		
	int isRepeat(string s)
	{
	    int n = s.size();
	    for(int k=1;k<=n/2;k++){
	        if(n%k == 0){
	            if(get(k,n/k,s.substr(0,k)) == s) return 1;
	        }
	    }
	    return 0;
	}
};

// { Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string str;
   		cin >> str;
        Solution ob;
   		cout << ob.isRepeat(str) << "\n";
   	}

    return 0;
}  // } Driver Code Ends