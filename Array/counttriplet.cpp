#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	int countTriplet(int arr[], int n)
	{
	   int index[1000000]={0};
	   for(int i=0;i<n;i++){
	       index[arr[i]]=1;
	   }
	   int c=0;
	   for(int i=0;i<n-1;i++){
	       for(int j=i+1;j<n;j++){
	           if(index[arr[i]+arr[j]]==1) c++;
	       }
	   }
	   return c;
	}
};
int main() 
{ 	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);  
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}
