//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    
    int min_index=0,max_index=0; 
    
    for(int i=1;i<n;i++){
        
        if(a[i] > a[max_index]){
            max_index = i; 
        } 
        
        if(a[i] < a[min_index]){
            min_index = i;
        } 
    } 
    
    pair<long long, long long> result; 
    result.first = a[min_index]; 
    result.second = a[max_index]; 
    
    
    return result;
    
}