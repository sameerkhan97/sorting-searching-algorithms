 #include<iostream>
using namespace std;
// function using reference variable and swap two values
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
void bubleSort(int *a, int n){
    int c=1,i;
    //c will count the number of time array is checked and while loop will operate untill c is smaller than array size.
     while(c<n) 
     {
        for(i=0;i<n-1;i++)
        {
            if(a[i]>a[i+1]) //Element at ith index will be compared with next element and if found smaller then will be swapped with next one.
                swap(a[i], a[i+1]);
        }
     c++;
    } 
}
int main()
{
    int n, i;
    cout<<"\nEnter Number of Elements  ";
    cin>>n;
    int a[n];
    cout<<"\nEnter "<<n<<" Elements ";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"\nBefore Sorting : ";
    display(a, n);
    bubleSort(a, n); 
    cout<<"\nAfter Sorting :  ";
    display(a, n);
    return 0;
 }
