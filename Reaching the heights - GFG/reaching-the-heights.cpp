// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


vector<int> reaching_height(int n, int a[]) ;

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
	    int n; 
	    cin >> n;
	    int a[n];
	    for (int i = 0; i < n; i++) 
	        cin >> a[i];
	    vector<int> v;
	    v = reaching_height(n,a);
	
	    if(v.size()==1 and v[0] == -1){
	        cout << "Not Possible\n";
	    }
	    else{
	    for(int i:v)
	        cout << i << " ";
	    cout << endl;}
	    
	}
	return 0;
}// } Driver Code Ends


//User function Template for C++

vector<int> reaching_height(int n, int a[]) {
    // Complete the function
    vector<int>  res;
    sort(a,a+n,greater<int>());
    int j = n-1;
    for(int i=0;i<n;i++){
        if(j<i)
        break;
        res.push_back(a[i]);
        if(i>j)
        break;
        res.push_back(a[j]);
        j--;
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(i%2 == 0)
        ans += res[i];
        else
        ans -= res[i];
    }
    if(ans > 0){
        if(n%2 != 0)
        res.pop_back();
    return res;
    }
    else
    return {-1};
    
    
    
}
