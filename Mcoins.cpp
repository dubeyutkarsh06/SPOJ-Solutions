#include<bits/stdc++.h>
#define int long int
#define str string
#define pb push_back
#define go_baby_go ios_base::sync_with_stdio(false);cin.tie(false);cout.tie(false);
using namespace std;
#define MAX 1000005
int arr[MAX];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(false);
    cout.tie(false);
    //heello
    int k,l,m,i;
    cin>>k>>l>>m;
    int arr1[m];
    for(i=0;i<m;i++)
        cin>>arr1[i];
    arr[0]=0;
    for(i=1;i<MAX;i++)
    {
        if(i-1>=0 && arr[i-1])
            arr[i]=1;
        if(i-k>=0 && arr[i-k])
            arr[i]=1;
        if(i-l>=0 && arr[i-l])
            arr[i]=1;
    }
    for(i=0;i<m;i++)
    {
        if(arr[arr1[i]]==1)
            cout<<"A";
        //o like it the way you
  
            cout<<"B";
    }
    return(0);
}
