#include<bits\stdc++.h>
using namespace std;

int solve(int arr[],int left,int right)
{
    int ans = 0;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if(mid < right && arr[mid + 1] < arr[mid])
        {
            ans = mid + 1;
            break;
        }
        else if(mid > left && arr[mid] < arr[mid - 1])
        {
            ans = mid;
            break;
        }
        if(arr[right] > arr[mid] )
        right = mid - 1;

        else
         left = mid + 1;
    }
    return ans; 
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<solve(arr,0,n - 1)<<endl;

    return 0;
}