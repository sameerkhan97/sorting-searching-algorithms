#include<iostream>
using namespace std;
void display(int *a, int n) {
    int i;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void countSort(int *a, int n, int k){//k-store max element in array,n-size of array a.
    int i, count[k+1],b[n];         //cout array of size k will be created to access index of array b(b has same size as array a)
    for(i=0;i<=k;i++)              
        count[i]=0;
    for(i=0;i<n;i++)
        count[a[i]]++;              //count array element will be incremented to 1 untill index of (n-1) ,elements after (n-1) will remain 0. 
    for(i=1;i<=k;i++)
        count[i]=count[i]+count[i-1]; //values in count array will incremented like 0th index storing 1,1st index storing 2,2nd index storing 3 till (n-1) but....
    for(i=n-1;i>=0;i--)               //after (n-1)th all indices will store only n bcoz they earlier had 0,which will not increment their value.
        b[--count[a[i]]]=a[i];     //element in array a @ ith index will be refered in count's index and its value will be decremented and that index...
    for(i=0;i<n;i++)               //will be accessed in array b and array a's value at ith index will be copied thier.
        a[i]=b[i];
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
    display(a,n) ;
    countSort(a,n,max) ;
    cout<<"\nAfter Sorting :  ";
    display(a,n);
    return 0;
 }
