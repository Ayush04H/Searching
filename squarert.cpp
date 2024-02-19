 #include<bits/stdc++.h>
 using namespace std;
 long long int binarysearch(int n) {
        
        int s = 0;
        int e = n;
        long long int mid = s + (e-s)/2;
        
        long long int ans = -1;
        while(s<=e) {
            
            long long int square = mid*mid;
            
            if(square == n)
                return mid;
            
            if(square < n ){
                ans = mid;
                s = mid+1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }


int floorSqrt(int n)
{
    binarysearch(n);
}
int main(){
    cout<<floorSqrt(36);
    cout<<floorSqrt(81);
    cout<<floorSqrt(4);
    cout<<floorSqrt(1);
}
