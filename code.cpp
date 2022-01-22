#include<iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
//sort(arr,arr+n);
int key;
cin>>key;
int l=0;
int h=n;
int mid;
while(l<=h){
    mid=(l+h)/2;
    if(key==arr[mid]){
        cout<<"Found at position: "<<mid;
        return 0;
    }
    else if (key <arr[mid]){
        mid=h-l;
    }
    else{
        l=mid+l;
    }
}
cout<<"not found";
return 0;
}
