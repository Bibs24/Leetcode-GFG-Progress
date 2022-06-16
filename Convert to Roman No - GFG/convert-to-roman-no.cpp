// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    string convertToRoman(int n) {
        // code here
         map<int,string> mp;
    mp[1] = "I";
    mp[2] = "II";
    mp[3] = "III";
    mp[4] = "IV";
    mp[5] = "V";
    mp[6] = "VI";
    mp[7] = "VII";
    mp[8] = "VIII";
    mp[9] = "IX";
    mp[10] = "X";
    mp[20] = "XX";
    mp[30] = "XXX";
    mp[40] = "XL";
    mp[50] = "L";
    mp[60] = "LX";
    mp[70] = "LXX";
    mp[80] = "LXXX";
    mp[90] = "XC";
    mp[100] = "C";
    mp[200] = "CC";
    mp[300] = "CCC";
    mp[400] = "CD";
    mp[500] = "D";
    mp[600] = "DC";
    mp[700] = "DCC";
    mp[800] = "DCCC";
    mp[900] = "CM";
    mp[1000] = "M";
    mp[2000] = "MM";
    mp[3000] = "MMM";
    string res = "";
    int k = 1;
    while(n>0){
        k = k*10;
        int x = n%k;
        res = mp[x] + res;
        n = n-x;
    }
    return res;
    }
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		Solution ob;
    	cout << ob.convertToRoman(N) << endl;
	}
	return 0;
}  // } Driver Code Ends