#include<bits\stdc++.h>
using namespace std;

void Bsearch(int arr[],int n,int x)
{
    int left = 0;
    int right = n - 1;
    while(left <= right)
    {
        int mid = (left + right) / 2;
        if(arr[mid] == x)
        {
            cout<<"Item is found: "<<endl;
            cout<<"The index is: "<<mid<<endl;
            return;
        }
        else if(arr[mid] > x)
        left = mid + 1;

        else
         right = mid -1;
    }
    cout<<"x is not found: ";
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++)
    cin>>arr[i];
    int x;
    cin>>x;
    Bsearch(arr,n,x);
    return 0;

}