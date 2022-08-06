#include <bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        vector<int> v;
        int start=0,f=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            while(sum>s && start<i){
                sum-=arr[start];
                start++;
            }
            if(sum==s){
                v.push_back(start+1);
                v.push_back(i+1);
                f=1;
                break;
            }
        }
            if(f) return v;
           else  return {-1};
    }
};
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
