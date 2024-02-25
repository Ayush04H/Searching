#include<bits/stdc++.h>
using namespace std;
bool ispossible(vector<int> &stalls, int k,int mid){
    int cntcow=1;
    int lstpos=stalls[0];
    for(int i=0;i<stalls.size();i++){
        if(stalls[i]-lstpos>=mid){
            cntcow++;
            if(cntcow==k){
                return true;
            }
            lstpos=stalls[i];
        }
    }
    return false;
}
int aggressiveCows(vector<int> &stalls, int k)
{
    int l=0;
    int maxi=-1;
    sort(stalls.begin(),stalls.end());
    for(int i=0;i<stalls.size();i++){
        maxi=max(maxi,stalls[i]);
    }
    int h=maxi;
    int mid=l+(h-l)/2;
    int ans=-1;

    while(l<=h){
        if(ispossible(stalls,k,mid)){
            ans=mid;
            l=mid+1;
        }
        else{
            h=mid-1;
        }
        mid=l+(h-l)/2;
    }
    return ans;
}
int main(){
    vector<int> a={0 ,3, 4, 7, 10, 9};
    cout<<aggressiveCows(a,4);
}