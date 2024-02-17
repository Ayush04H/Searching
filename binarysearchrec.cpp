//Binary searh using the iterative approach O(n)
#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int> a, int l, int h ,int x){
    	if(l > h)
		return -1;

	int mid = (l + h) / 2;

	if(a[mid] == x)
		return mid;

	else if(a[mid] > x)
		return binarysearch(a, l, mid - 1, x);

	else
		return binarysearch(a, mid + 1, h, x);

}
int main(){
    vector<int> a={1,2,3,5,8,9,6,3,2,55,44};
    sort(a.begin(),a.end());
    int x=8;
    int l=0,h=a.size()-1;
    cout<<binarysearch(a,l,h,x);
}