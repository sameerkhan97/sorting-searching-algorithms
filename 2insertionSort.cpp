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
void insertSort(int *a, int n){
    int i,j;
    for(i=1;i<n;i++) 
     {                      //It will take element at ith inedx and compare it with its previous element first and if found smaller then will it swap with previous.
        for(j=i;j>0;j--)   //then it will be again compared with next previous element following same procedure untill no previous element is greater than it.
        {                 
            if(a[j]<a[j-1])
               swap(a[j],a[j-1]);
            else
                break;
         }
    }
}
int main(){
    int n, i;
    cout<<"\nEnter Number of Elements ";
    cin>>n;
    int a[n];
    cout<<"\nEnter "<<n<<" Elements ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nBefore Sorting : ";
    display(a, n) ;
    insertSort(a, n) ;
    cout<<"\nAfter Sorting :  ";
    display(a, n);
    return 0;
 }
