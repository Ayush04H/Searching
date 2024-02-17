//Index of the last occurence of a number 
#include<bits/stdc++.h>
using namespace std;
//Naive Linear Search Approach
int lsearch(vector<int> a,int x){
    for(int i=a.size()-1;i>=0;i--){
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}
//Binary Search Iterative Approch
int binarysearch(vector<int> arr,int x){

	int low = 0, high = arr.size() - 1;

	while(low <= high)
	{
		int mid = (low + high) / 2;

		if(x > arr[mid])
			low = mid + 1;

		else if(x < arr[mid])
			high = mid - 1;

		else
		{
			if(mid == arr.size() - 1 || arr[mid + 1] != arr[mid])
				return mid;

			else
				low = mid + 1;
		}

	}

	return -1;
}

int lastOcc(vector<int> a, int low, int high, int x, int n)
{
	if(low > high)
		return -1;

	int mid = (low + high) / 2;

	if(x > a[mid])
		return lastOcc(a, mid + 1, high, x, n);

	else if(x < a[mid])
		return lastOcc(a, low, mid - 1, x, n);

	else
	{
		if(mid == n - 1 || a[mid + 1] != a[mid])
			return mid;

		else
			return lastOcc(a, mid + 1, high, x, n);
	}
}


int main(){
    vector<int> a={1,2,3,4,5,6,6,7,8,8,9};
    int x=8;
    cout<<lsearch(a,x);
    cout<<binarysearch(a,x);
    int l=0,h=a.size()-1;
    int n=a.size();
    cout<<lastOcc(a,l,h,x,n);
}