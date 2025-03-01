#include<bits\stdc++.h>
using namespace std;

int firstOccurence(int arr[],int n,int x)
{
    int left = 0;
    int right = n - 1;
    int ans = -1;

    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(x == arr[mid])
        {
            ans = mid;
            right = mid - 1;
        }
        else if(x > arr[mid])
        left = mid + 1;
        else if(x < arr[mid])
        right = mid - 1;
    }
    return ans;
}


int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i< n; i++){
        cin>>arr[i];
    }
    int index = firstOccurence(arr,n,55);
    cout<<"The index is: "<<index<<endl;

    return 0;
}