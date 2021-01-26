#include<iostream>
using namespace std;
void swap(int &a, int &b) {
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void display(int *a, int n) {
    int i;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int partition(int *a,int l,int u){
     int start=l,end=u,pivot=a[l];
     while(start<end) 
     {
        while(a[start]<=pivot)
            start++;
        while(a[end]>pivot)
            end--;
        if(start<end) 
            swap(a[start],a[end]) ;
     }
     swap(a[l], a[end]) ;
     return end;
 }
 void quickSort(int *a, int l, int u){
    int loc;
    if(l<u) 
    {
        loc=partition(a, l, u);
        quickSort(a, l, loc-1) ;
        quickSort(a, loc+1, u) ;
     }
}   
int main(){
    int n, i;
    cout<<"\nEnter Number of Elements ";
    cin>>n;
    int a[n];
    cout<<"\nEnter "<<n<<" Elements ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\nBefore Sorting : ";
    display(a, n) ;
    quickSort(a, 0,n-1) ;
    cout<<"\nAfter Sorting :  ";
    display(a, n);
    return 0;
 }
