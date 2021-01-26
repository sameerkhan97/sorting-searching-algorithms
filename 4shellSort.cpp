#include<iostream>
using namespace std;
void display(int *a, int n){
    int i;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void swap(int &a, int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void shellSort(int *a, int n){
    int i,gap=n/2, j;
    while(gap>0)
    {
        for(j=gap;j<n;j++)
        {
            for(i=j-gap;i>=0;i=i-gap) 
            {
                if(a[i]<=a[i+gap])
                    break;
                else
                    swap(a[i], a[i+gap]) ;
             }
        }
         gap=gap/2;
     }
 }
int main(){
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
    shellSort(arr, size);
    cout<<"\nAfter Sorting : ";
    display(arr, size);
    return 0;
}
