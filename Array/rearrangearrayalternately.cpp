1st Approach :

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void rearrange(long long *arr, int n) 
    { 
    long long int i,min=0,max=n-1,M=arr[n-1]+1;
    for(i=0;i<n;i++){
        if(i%2==0){
            arr[i]=arr[i]+((arr[max]%M)*M);
            max--;
        }
        else {
            arr[i]=arr[i]+((arr[min]%M)*M);
            min++;
        }
    }
    for(int i=0;i<n;i++){
        arr[i]=arr[i]/M;
    }
    	 
    }
};
int main() 
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (int i = 0; i < n; i++) 
		    cout << arr[i] << " ";
		cout << endl;
    }
	return 0; 
} 

2nd Approach :

#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void rearrange(long long *arr, int n) 
    { 
        vector<int> v;
        for(int i=0;i<n;i++){
            v.push_back(arr[n-1-i]);
            v.push_back(arr[i]);
        }
        for(int i=0;i<n;i++){
            arr[i]=v[i];
        }
    }
};
int main() 
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long arr[n];
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0; 
} 
