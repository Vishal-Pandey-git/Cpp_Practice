/*Given an array Arr of N positive integers.
Your task is to find the elements whose value is equal to that of its index value ( Consider 1-based indexing ).
Example 1:

Input:
N = 5
Arr[] = {15, 2, 45, 12, 7}
Output: 2
Explanation: Only Arr[2] = 2 exists here.
Example 2:

Input:
N = 1
Arr[] = {1}
Output: 1
Explanation: Here Arr[1] = 1 exists.*/

#include<iostream>
#include<bits/stdc++.h>
// #include<vector>
using namespace std;

class Solution{
public:
	vector <int> valueEqualToIndex(int arr[], int n) {
	    vector <int> v;
	    for(int i=0;i<n;i++){
	        if(arr[i]==i+1){
	            v.push_back(arr[i]);
	        }
	        else{
	            continue;
	        }
	    }
	    return v;
	}
};

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Solution ob;
    auto ans = ob.valueEqualToIndex(arr, n);
    if (ans.empty())
    {
        cout << "Not Found";
    }
    else
    {
        for (int x : ans)
        {
            cout << x << " ";
        }
    }
    cout << "\n";
    return 0;
}