#include<iostream>
using namespace std;
int main()
{
    int n, i, b, c=0;
    cout<<"\nEnter Number of Elements ";
    cin>>n;
    int a[n];
    
    cout<<"\nEnter "<<n<<" Elements ";
    for(i=0;i<n;i++){
    cin>>a[i];
    }
    cout<<"\nEnter element to search ";
    cin>>b;
    for(i=0;i<n;i++) 
    {
        if(a[i]==b)
        {
            cout<<"\n"<<b<<" found at index "<<i;
            c++;
        }
     }
    if(c==0)
        cout<<"\nElement not found ";
 
    return 0;
 }