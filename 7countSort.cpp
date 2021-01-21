#include<iostream>
using namespace std;
void display(int *a, int n) {
    int i;
    for(i=0;i<n;i++){
    cout<<a[i]<<" ";
    }
}
void countSort(int *a, int n, int k){
    int i, count[k+1],b[n];
    for(i=0;i<=k;i++){
        count[i]=0;
    }
    for(i=0;i<n;i++){
        count[a[i]]++;
    }
    for(i=1;i<=k;i++){
        count[i]=count[i]+count[i-1];
    }
    for(i=n-1;i>=0;i--){
        b[--count[a[i]]]=a[i];
    }
    for(i=0;i<n;i++){
        a[i]=b[i];
    }
}

int main()
{
    int n, i, max=0;
    cout<<"\nEnter Number of Elements ";
    cin>>n;
    int a[n];
    
    cout<<"\nEnter "<<n<<" Elements ";
    for(i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>max)
        max=a[i];
    }
    
    cout<<"\nBefore Sorting : ";
    display(a, n) ;
   
    countSort(a, n, max) ;
    
    cout<<"\nAfter Sorting :  ";
    display(a, n);
    
    return 0;
 }