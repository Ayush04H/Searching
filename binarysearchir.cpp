//Binary searh using the iterative approach O(n)
#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int> a,int x){
    int low=0;int high=a.size()-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(a[mid]<x){
            low=mid+1;
        }
        else if(a[mid]>x){
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    vector<int> a={1,2,3,5,8,9,6,3,2,55,44};
    sort(a.begin(),a.end());
    int x=55;
    cout<<binarysearch(a,x);
}