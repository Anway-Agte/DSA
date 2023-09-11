#include <bits/stdc++.h> 
#include<stack>
void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
	stack<int> s; 
	for(int i=m+1;i<arr.size();i++){
		s.push(arr[i]);
	} 

	for(int i=m+1;i<arr.size();i++){
		arr[i] = s.top();
		s.pop(); 
	}  

}
