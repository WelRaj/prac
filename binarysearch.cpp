#include<iostream>
using namespace std;
 void binarysearch(int arr[],int n,int a){
    int p=0;         
    int low=0;
    int high=n-1;
    while(low<=high){
    int mid=(low+high)/2;
    if(a==arr[mid]){
        //cout<<"element found"<<endl;
        p=mid;
        break;
    }
    else if(a<arr[mid]){
        high=mid-1;

    }
    else{
        low=mid+1;
    }}
    if(p<=0){
        cout<<"element not found"<<endl;
    }
   else{ cout<<"element found"<<endl;
       }
        
    
     
  }
int main()
{
    int arr[9]={1,2,3,4,12,32,43,56,59};
    int n=9;
    int a=5;
    binarysearch(arr,n,a);
}