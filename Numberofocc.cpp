#include<bits/stdc++.h>
using namespace std;
int firstOcc(vector<int>& a, int n, int key) {

    int l=0,h=n-1;
    int ans=-1;
    int mid=l+(h-l)/2;
    while(l<=h){
        if(key==a[mid]){
            ans=mid;
            h=mid-1;
        }
        else if(key>a[mid]){
            l=mid+1;
        }
        else if(key<a[mid]){
            h=mid-1;
        }
        mid=l+(h-l)/2;
    }
    return ans;
}

int lastOcc(vector<int>& a, int n, int key) {
    int l=0,h=n-1;
    int ans=-1;
    int mid=l+(h-l)/2;
    while(l<=h){
        if(key==a[mid]){
            ans=mid;
            l=mid+1;
        }
        else if(key>a[mid]){
            l=mid+1;
        }
        else if(key<a[mid]){
            h=mid-1;
        }
        mid=l+(h-l)/2;
    }
    return ans;
    
}
int count(vector<int>& arr, int n, int x) {
	int first,last;
	first=firstOcc(arr, n,  x);
	last=lastOcc(arr, n,  x);
	int c=first-last+1;
	return c;
}
int main(){
    vector<int> a={1,2,3,4,5,5,5,5,5,5,5,5};
    int n=a.size();
    int x=firstOcc(a,n,5);
    int y=lastOcc(a,n,5);
    cout<<y-x+1;
    cout<<count(a,a.size(),5);
}
