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
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
//func. sort 2 sub array and merge them into another array b,then copy array b into original array a.
//array 1 ranges from loweIndex-mid,array 2 ranges from mid+1-upperIndex.
void merge(int *a,int l,int mid,int u){
    int b[u+1],i=l, j=mid+1, k=l;   //i-count index of 1st subarray,j-count index of 2nd subarray,k-index of copy array i.e array b
    while(i<=mid && j<=u)   //loop access every elemnt in 2 sub-arrays compare them with each other and then copy it in array b untill one of the 2 subarrays ends
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
    if(i<=mid)  //if array 2 end before array 1,then all elements of array 1 are copied in b. 
    {
        while(i<=mid)
        {
            b[k]=a[i];
            i++;
            k++;
        }
    }
    if(j<=u)    //if array 1 end before array 2,then all elements of array 2 are copied in b.
    {
        while(j<=u)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    for(k=l;k<=u;k++)   //copying array b into oiginal array a.
    {
    `   a[k]=b[k];
    }
}
/*function recursively call itself and devide array into subarray untill array is devided into single element.
  func then call merge() function which sorts 2 subarray and merge them. */
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
    for(i=0;i<size;i++) {
        cin>>arr[i];
    }
    cout<<"\nBefore Sorting : ";
    display(arr, size);   
    mergeSort(arr,0,size-1);
    cout<<"\nAfter Sorting : ";
    display(arr, size);
    return 0;
}
