//Finding Out the pivot element in the code
#include<bits/stdc++.h>
using namespace std;
int pivotele(vector<int> a){
    int l=0,h=a.size()-1;
    int mid=l+(h-l)/2;
    while(l<h){
        if(a[mid]>=a[0]){
            l=mid+1;
        }
        else{
            h=mid;
        }
        mid=l+(h-l)/2;
    }
    return l;
}
int main(){
    vector <int> a ={3,7,9,1,2};
    cout<<pivotele(a);

}