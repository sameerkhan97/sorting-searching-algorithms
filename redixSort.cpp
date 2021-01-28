#include<iostream>
using namespace std;
void display(int *a, int n) {
    int i;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
void countSort(int *a, int n, int pos){
    int i, count[10],b[n];  //defining count array of size 10 bcoz digit vary from 0-9
    for(i=0;i<10;i++)
        count[i]=0;
    for(i=0;i<n;i++)
        count[(a[i]/pos)%10]++; //value at a[i] will be devided and particular digit of value will be used as an index in count incrementing it to 1. 
    for(i=1;i<10;i++)           
        count[i]=count[i]+count[i-1]; //values at count array will be incremented by adding previous element values.
    for(i=n-1;i>=0;i--)
        b[--count[(a[i]/pos)%10 ]]=a[i];//value at a[i] will be devided and particular digit of value will be used as an index in count ....
    for(i=0;i<n;i++)                    //value at that index of count will be decremented by one and used as index of array b,value at ith index in a will be copied at that index of b.
        a[i]=b[i];                       
}
void radixSort(int *a, int n, int max){
    int pos;    //pos defines which digit to be compared in sorting using (max/pos)%10,like if pos=1 then sorting will be on leftmost digit,if pos=10 then second...
    for(pos=1;max/pos>0;pos*10) //second leftmost digit will be used for sorting
        countSort(a,n,pos);
}
int main(){
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
    display(a,n);  
    radixSort(a,n,max) ;
    cout<<"\nAfter Sorting :  ";
    display(a, n);
    return 0;
 }
