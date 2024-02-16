//Binary searh using the iterative approach O(n)
#include<bits/stdc++.h>
using namespace std;
int binarysearch(vector<int> a,int x){
    for(int i=0;i<a.size();i++){
        if(a[i]==x){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int> a={1,2,3,5,8,9,6,3,2,55,44};
    int x=2;
    cout<<binarysearch(a,x);
}