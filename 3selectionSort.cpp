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
void selectSort(int *a, int n){
    int i,j,loc, min;
    //min-store smallest value in array ,loc-store location of minimum value
    for(i=0;i<n;i++) 
    {
       min=a[i];    //every array element will be copied in min variable one by one and will be compared with all the next right side elements
       loc=i;
       for(j=i;j<n;j++)
       {
            if(a[j]<min)  //It will find smallest element on right side of comparing element in Array
            {
              loc=j;
              min=a[j];
            }
        }
     swap(a[i], a[loc]) ; //Smallest element in right side of array will be swapped with the comparing element
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
    display(a,n) ;
    selectSort(a,n) ;
    cout<<"\nAfter Sorting :  ";
    display(a,n);
    return 0;
 }
