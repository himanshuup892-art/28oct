#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int key;
    int n=5;
    cout<<"Search Number : ";
    cin>>key;

    int low =0;
    int high = n-1;
    int mid;

    while(low <= high){
        mid = low +(high-low)/2;
    }
    if(arr[mid]==key){
        cout<<"Elements found at index"<<mid;
        return 0;
    }
    else if(arr[mid]<key){
        low = mid +1;
    }
    else{
        high = mid -1;
    }
    cout<<"Element not found"<<endl;
    return 0;
}