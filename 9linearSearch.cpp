#include<iostream>
using namespace std;
int main(){
    int n, i, b, c=0;   //initialising c with 0 ,so that once we found the element we will increment it which will help in the end condition.
                        //Using c we can also count occurance of a element in array bcoz every time an element is found c will be incremented by one
    cout<<"\nEnter Number of Elements ";
    cin>>n;
    int a[n];
    cout<<"\nEnter "<<n<<" Elements ";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"\nEnter element to search ";
    cin>>b;
    for(i=0;i<n;i++) 
    {
        if(a[i]==b) //all the array elements will be one by one compared with searching element
        {                                   
            cout<<"\n"<<b<<" found at index "<<i;
            c++;    //incrementing count will be usefull at end to know whether element is present or not
        }
    }
    if(c==0)
        cout<<"\nElement not found ";
    return 0;
 }
