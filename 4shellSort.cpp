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
    int i,gap=n/2, j;                 //initially Gap is considered half of size of array
                                      //function will compare every value with the value present at a particular gap meaning ith element will be compared with (i+gap)th element
    while(gap>0)
    {
        for(j=gap;j<n;j++)            //j will be use to access every single element
        {
            for(i=j-gap;i>=0;i=i-gap)//i will be use to compare elements with their gap element
            {                        //if 0th element is compared with 3rd element and later 3rd element is swaped with 7th element
                if(a[i]<=a[i+gap])   // then swapped element at 3rd will be again compared with 0th element using statement i=i-gap
                    break;
                else
                    swap(a[i], a[i+gap]) ;
             }
        }
         gap=gap/2;                 //Afrer Each cycle the gap is reduced to half
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
