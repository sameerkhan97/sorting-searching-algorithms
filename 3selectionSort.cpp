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
    for(i=0;i<n;i++) 
    {
       min=a[i];
       loc=i;
       for(j=i;j<n;j++)
       {
            if(a[j]<min)
            {
              loc=j;
              min=a[j];
            }
        }
     swap(a[i], a[loc]) ;
    }
}
int main()
{
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
   
    selectSort(a, n) ;
    
    cout<<"\nAfter Sorting :  ";
    display(a, n);
    
    return 0;
 }