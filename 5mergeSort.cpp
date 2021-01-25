#include<iostream>
using namespace std;
void swap(int &a, int &b) {
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void display(int *a, int n){
    int i;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void merge(int *a,int l,int mid,int u) {
    int b[u+1],i=l, j=mid+1, k=l;
    while(i<=mid && j<=u)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i<=mid)
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    if(j<=u)
    {
        while(j<=u)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    for(k=l;k<=u;k++)
    {
    `   a[k]=b[k];
    }
}
void mergeSort(int *arr,int l,int u)
{
    int mid;
    if(l<u)
    {
        mid=l+(u-l)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1,u);
        merge(arr, l, mid, u) ;
     }
}
int main() {
    int i,size;
    cout<<"\nEnter Size of Array ";
    cin>>size;
    int arr[size];
    cout<<"\nEnter elements ";
    for(i=0;i<size;i++) 
    {
        cin>>arr[i];
    }
    cout<<"\nBefore Sorting : ";
    display(arr, size);   
    mergeSort(arr,0,size-1);
    cout<<"\nAfter Sorting : ";
    display(arr, size);
    return 0;
}
